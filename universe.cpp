#include "universe.h"

const std::string DDI::Universe::_label_ = "universe";

DDI::Universe::Universe(std::string _ID)
{
    ID = _ID;
}

DDI::Universe::Universe(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Universe::getXMLLabel() {
    return _label_;
}
