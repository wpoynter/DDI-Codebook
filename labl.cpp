#include "labl.h"

const std::string DDI::Labl::_label_ = "labl";

DDI::Labl::Labl(std::string _ID)
{
    ID = _ID;
}

DDI::Labl::Labl(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Labl::getXMLLabel() {
    return _label_;
}
