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
    DataDscr(std::string _ID = "");
    DataDscr(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
};

}

#endif // DATADSCR_H
