#ifndef VARGRP_H
#define VARGRP_H

#include <vector>

#include "ddientity.h"
#include "referenceable.h"
#include "refid.h"
#include "labl.h"
#include "var.h"

namespace DDI {

class VarGrp : public DDIEntity, public Referenceable<VarGrp>
{
private:
    //Attributes
    DDI::MultiRefID<DDI::Var> var;
    DDI::MultiRefID<DDI::VarGrp> varGrp;
    //std::string varGrp;
    //Children
    std::vector<Labl*> labl;                          //Optional
public:
    VarGrp(std::string _ID = "");
    VarGrp(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
    bool readAttribute(std::string _name, std::string _value);

    std::vector<Labl*>::iterator getLablBegin();
    std::vector<Labl*>::iterator getLablEnd();
};

typedef std::shared_ptr<VarGrp> VarGrpPtr;

}

#endif // VARGRP_H
