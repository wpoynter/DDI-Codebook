#ifndef VARGRP_H
#define VARGRP_H

#include <list>

#include "ddientity.h"
#include "labl.h"

namespace DDI {

class VarGrp : public DDIEntity
{
private:
    //Attributes
    std::string var;
    std::string varGrp;
    //Children
    std::list<Labl*> labl;                          //Optional
public:
    VarGrp(std::string _ID);
};

}

#endif // VARGRP_H
