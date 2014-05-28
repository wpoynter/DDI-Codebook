#ifndef DATADSCR_H
#define DATADSCR_H

#include <vector>

#include "ddientity.h"
#include "vargrp.h"
#include "var.h"

namespace DDI {

class DataDscr : public DDIEntity
{
private:
    //Children
    std::vector<VarGrp*> varGrp;                          //Optional
    std::vector<Var*> var;                                //Optional
public:
    DataDscr(std::string _ID);
};

}

#endif // DATADSCR_H
