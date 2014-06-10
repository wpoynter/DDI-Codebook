#ifndef REFERENCEABLE_H
#define REFERENCEABLE_H

#include <vector>
#include <memory>

#include <iostream>

namespace DDI {

template <typename T>
class Referenceable : public std::enable_shared_from_this<Referenceable<T> >
{
public:
    static std::vector<T*> all;

    Referenceable() {
        all.push_back(static_cast<T*>(this));
    }

    virtual ~Referenceable() {
        for (typename std::vector<T*>::iterator iter = all.begin();
             iter != all.end(); iter++)
        {
            if (*iter == this)
            {
                all.erase(iter);
                break;
            }
        }
    }

    std::shared_ptr<T> getShrPtr()
    {
        std::shared_ptr<Referenceable<T> > a = this->shared_from_this();
        return std::static_pointer_cast<T>(a);
    }
};

template <typename T> std::vector<T*> Referenceable<T>::all;

}

#endif // REFERENCEABLE_H
