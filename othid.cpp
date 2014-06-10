#include "othid.h"

const std::string DDI::OthId::_label_ = "othId";

DDI::OthId::OthId(std::string _ID)
{
    ID = _ID;
}

DDI::OthId::OthId(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}


std::string DDI::OthId::getXMLLabel() {
    return _label_;
}
