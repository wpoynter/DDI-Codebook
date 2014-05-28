#ifndef CATGRYGRP_H
#define CATGRYGRP_H

#include <vector>

#include "ddientity.h"
#include "labl.h"
#include "catstat.h"

namespace DDI {

class CatgryGrp : public DDIEntity
{
private:
    //Attributes
    std::string catgry;
    std::string catGrp;
    //Children
    std::vector<Labl*> labl;                          //Optional
    std::vector<CatStat*> catStat;                    //Optional
public:
    CatgryGrp(std::string _ID);
};

}

#endif // CATGRYGRP_H
