#ifndef VARGRP_H
#define VARGRP_H

#include <vector>

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
    std::vector<Labl*> labl;                          //Optional
public:
    VarGrp(std::string _ID = "");
    VarGrp(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // VARGRP_H
