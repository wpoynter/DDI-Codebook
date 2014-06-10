#ifndef REFID_H
#define REFID_H

#include <vector>
#include <memory>

#include "ddientity.h"
#include "referenceable.h"
#include "pipe.h"
#include "utils.h"

namespace DDI {

template <typename T>
class RefID
{
private:
    std::string ID;
    std::shared_ptr<DDIEntity> ref;

    static std::vector<RefID<T>*> all;
public:
    static void linkAll()
    {
        for(typename std::vector<RefID<T>*>::iterator iter = all.begin();
            iter != all.end(); iter++)
        {
            if (!(*iter)->link())
                out << "Unable to link reference ID" << std::endl;
        }
    }

    RefID()
    {
        all.push_back(this);
    }

    RefID(std::string _ID)
    {
        ID = _ID;
        all.push_back(this);
    }

    ~RefID()
    {
        for (typename std::vector<RefID*>::iterator iter = all.begin();
             iter != all.end(); iter++)
        {
            if (*iter == this)
            {
                all.erase(iter);
                break;
            }
        }
    }

    bool link()
    {
        for (typename std::vector<T*>::iterator iter = T::all.begin();
             iter != T::all.end(); iter++)
        {
            if ((*iter)->getID() == ID)
            {
                ref = std::shared_ptr<T>((*iter)->getShrPtr());
                return true;
            }
        }
        return false;
    }
    void operator=(std::string str)
    {
        ID = str;
    }
};

template <typename T>
class MultiRefID
{
private:
    std::string ID;
    std::vector<std::string> IDs;
    std::vector<std::shared_ptr<T> > refs;

    static std::vector<MultiRefID<T>*> all;
public:
    static void linkAll()
    {
        for(typename std::vector<MultiRefID<T>*>::iterator iter = all.begin();
            iter != all.end(); iter++)
        {
            int linked = (*iter)->link();
            int size = (*iter)->getSize();
            if (linked != size)
            {
                if (linked == 0)
                {
                    out << "Unable to link any IDs within a multiref (" << (*iter)->getID() << ")" << std::endl;
                }
                else
                {
                    out << "Unable to link " << size - linked << " of " << size << " reference IDs within a multiref" << std::endl;
                }
            }
        }
    }

    MultiRefID()
    {
        all.push_back(this);
    }

    MultiRefID(std::string _ID)
    {
        ID = _ID;
        std::vector<std::string> IDs = DDI::Utils::explode(ID);
        all.push_back(this);
    }

    ~MultiRefID()
    {
        for (typename std::vector<MultiRefID*>::iterator iter = all.begin();
             iter != all.end(); iter++)
        {
            if (*iter == this)
            {
                all.erase(iter);
                break;
            }
        }
    }

    int link()
    {
        int linked = 0;
        for (std::vector<std::string>::iterator iter_IDs = IDs.begin();
             iter_IDs != IDs.end(); iter_IDs++) {
            for (typename std::vector<T*>::iterator iter = T::all.begin();
                 iter != T::all.end(); iter++)
            {
                if ((*iter)->getID() == *iter_IDs)
                {
                    refs.push_back(std::shared_ptr<T>((*iter)->getShrPtr()));
                    linked++;
                    break;
                }
            }
        }
        return linked;
    }

    int getSize()
    {
        return IDs.size();
    }

    void operator=(std::string str)
    {
        ID = str;
        IDs = DDI::Utils::explode(ID);
    }

    std::string getID()
    {
        return ID;
    }
};

template <typename T> std::vector<RefID<T>*> RefID<T>::all;
template <typename T> std::vector<MultiRefID<T>*> MultiRefID<T>::all;

}

#endif // REFID_H
