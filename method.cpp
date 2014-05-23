#include "method.h"

const std::string DDI::Method::_label_ = "method";

DDI::Method::Method(std::string _ID = "")
{
    ID = _ID;
}

DDI::Method::Method(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}


std::string DDI::Method::getXMLLabel() {
    return _label_;
}
