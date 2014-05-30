#include "biblcit.h"

const std::string DDI::BiblCit::_label_ = "biblCit";

DDI::BiblCit::BiblCit(std::string _ID)
{
    ID = _ID;
}

DDI::BiblCit::BiblCit(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::BiblCit::getXMLLabel() {
    return _label_;
}
