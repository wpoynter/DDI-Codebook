#ifndef DISTSTMT_H
#define DISTSTMT_H

#include <list>

#include "ddientity.h"
#include "distrbtr.h"
#include "distdate.h"

namespace DDICodebook {

class DistStmt : public DDIEntity
{
private:
    //Children
    std::list<Distrbtr*> distrbtr;                  //Optional
    DistDate *distDate;                             //Optional
public:
    DistStmt(std::string _ID);
};

}

#endif // DISTSTMT_H
