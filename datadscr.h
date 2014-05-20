#ifndef DATADSCR_H
#define DATADSCR_H

#include <list>

#include "ddientity.h"
#include "vargrp.h"
#include "var.h"

namespace DDICodebook {

class DataDscr : public DDIEntity
{
private:
    //Children
    std::list<VarGrp*> varGrp;                          //Optional
    std::list<Var*> var;                                //Optional
public:
    DataDscr(std::string _ID);
};

}

#endif // DATADSCR_H
