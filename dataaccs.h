#ifndef DATAACCS_H
#define DATAACCS_H

#include <list>

#include "ddientity.h"
#include "setavail.h"
#include "usestmt.h"

namespace DDICodebook {

class DataAccs : public DDIEntity
{
private:
    //Children
    std::list<SetAvail*> setAvail;                  //Optional
    std::list<UseStmt*> useStmt;                    //Optional
public:
    DataAccs(std::string _ID);
};

}

#endif // DATAACCS_H
