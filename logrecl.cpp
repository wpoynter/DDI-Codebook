#include "logrecl.h"

const std::string DDI::LogRecl::_label_ = "logRecL";

DDI::LogRecl::LogRecl(std::string _ID)
{
    ID = _ID;
}

DDI::LogRecl::LogRecl(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::LogRecl::getXMLLabel() {
    return _label_;
}
