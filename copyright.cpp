#include "copyright.h"

const std::string DDI::Copyright::_label_ = "copyright";

DDI::Copyright::Copyright(std::string _ID = "")
{
    ID = _ID;
}

DDI::Copyright::Copyright(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Copyright::getXMLLabel() {
    return _label_;
}
