#include "distrbtr.h"

const std::string DDI::Distrbtr::_label_ = "distrbtr";

DDI::Distrbtr::Distrbtr(std::string _ID)
{
    ID = _ID;
}

DDI::Distrbtr::Distrbtr(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Distrbtr::getXMLLabel() {
    return _label_;
}
