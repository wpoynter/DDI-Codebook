#include "catvalu.h"

const std::string DDI::CatValu::_label_ = "catValu";

DDI::CatValu::CatValu(std::string _ID)
{
    ID = _ID;
}

DDI::CatValu::CatValu(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::CatValu::getXMLLabel() {
    return _label_;
}
