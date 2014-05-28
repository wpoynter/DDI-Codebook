#ifndef SUMDSCR_H
#define SUMDSCR_H

#include <vector>

#include "ddientity.h"
#include "timeprd.h"
#include "colldate.h"
#include "nation.h"
#include "geogcover.h"
#include "anlyunit.h"
#include "universe.h"
#include "datakind.h"

namespace DDI {

class SumDscr : public DDIEntity
{
private:
    //Children
    std::vector<TimePrd*> timePrd;                    //Optional
    std::vector<CollDate*> collDate;                  //Optional
    std::vector<Nation*> nation;                      //Optional
    std::vector<GeogCover*> geogCover;                //Optional
    std::vector<AnlyUnit*> anlyUnit;                  //Optional
    std::vector<Universe*> universe;                  //Optional
    std::vector<DataKind*> dataKind;                  //Optional
public:
    SumDscr(std::string _ID);
};

}

#endif // SUMDSCR_H
