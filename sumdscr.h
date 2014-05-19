#ifndef SUMDSCR_H
#define SUMDSCR_H

#include <list>

#include "ddientity.h"
#include "timeprd.h"
#include "colldate.h"
#include "nation.h"
#include "geogcover.h"
#include "anlyunit.h"
#include "universe.h"
#include "datakind.h"

namespace DDICodebook {

class SumDscr : public DDIEntity
{
private:
    //Children
    std::list<TimePrd*> timePrd;                    //Optional
    std::list<CollDate*> collDate;                  //Optional
    std::list<Nation*> nation;                      //Optional
    std::list<GeogCover*> geogCover;                //Optional
    std::list<AnlyUnit*> anlyUnit;                  //Optional
    std::list<Universe*> universe;                  //Optional
    std::list<DataKind*> dataKind;                  //Optional
public:
    SumDscr(std::string _ID);
};

}

#endif // SUMDSCR_H
