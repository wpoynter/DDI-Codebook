#include "titl.h"

const std::string DDI::Titl::_label_ = "titl";

DDI::Titl::Titl(std::string _ID)
{
    ID = _ID;
}

DDI::Titl::Titl(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Titl::getXMLLabel() {
    return _label_;
}
