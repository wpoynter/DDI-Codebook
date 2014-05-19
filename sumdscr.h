#ifndef SUMDSCR_H
#define SUMDSCR_H

#include <list>

#include "ddientity.h"
#include "timeprd.h"

namespace DDICodebook {

class SumDscr : public DDIEntity
{
private:
    //Children
    std::list<TimePrd*> timePrd;                    //Optional
public:
    SumDscr(std::string _ID);
};

}

#endif // SUMDSCR_H
