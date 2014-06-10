#include "vargrp.h"

#include "pipe.h"

const std::string DDI::VarGrp::_label_ = "varGrp";

DDI::VarGrp::VarGrp(std::string _ID) :
    Referenceable()
{
    ID = _ID;
}

DDI::VarGrp::VarGrp(rapidxml::xml_node<> *_node) :
    Referenceable()
{
    readNode(_node);
}

std::string DDI::VarGrp::getXMLLabel() {
    return _label_;
}

void DDI::VarGrp::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Labl::_label_)
        {
            labl.push_back(new Labl(node));
        }
        else
        {
            out << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}

bool DDI::VarGrp::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "var")
    {
        var = _value;
    }
    else if(_name == "varGrp")
    {
        varGrp = _value;
    }
    else
    {
        return false;
    }
    return true;
}

std::vector<DDI::Labl*>::iterator DDI::VarGrp::getLablBegin()
{
    return labl.begin();
}

std::vector<DDI::Labl*>::iterator DDI::VarGrp::getLablEnd()
{
    return labl.end();
}
