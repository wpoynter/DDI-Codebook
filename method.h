#ifndef METHOD_H
#define METHOD_H

#include <list>

#include "ddientity.h"
#include "datacoll.h"
#include "notes.h"

namespace DDICodebook {

class Method : public DDIEntity
{
private:
    //Children
    std::list<DataColl*> dataColl;                      //Optional
    std::list<Notes*> notes;                            //Optional
public:
    Method(std::string _ID);
};

}

#endif // METHOD_H
