#include "catgrygrp.h"

#include "pipe.h"

const std::string DDI::CatgryGrp::_label_ = "catgryGrp";

DDI::CatgryGrp::CatgryGrp(std::string _ID)
{
    ID = _ID;
}

DDI::CatgryGrp::CatgryGrp(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::CatgryGrp::getXMLLabel() {
    return _label_;
}

void DDI::CatgryGrp::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Labl::_label_)
        {
            labl.push_back(new Labl(node));
        }
        else if (node->name() == DDI::CatStat::_label_)
        {
            catStat.push_back(new CatStat(node));
        }
        else
        {
            out << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}


bool DDI::CatgryGrp::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "catgry")
    {
        catgry = _value;
    }
    else if (_name == "catGrp")
    {
        catGrp = _value;
    }
    else {
        return false;
    }
    return true;
}
