#include "sername.h"

const std::string DDI::SerName::_label_ = "serName";

DDI::SerName::SerName(std::string _ID)
{
    ID = _ID;
}

DDI::SerName::SerName(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::SerName::getXMLLabel() {
    return _label_;
}
