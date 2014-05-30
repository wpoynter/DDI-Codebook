#include "derivation.h"

const std::string DDI::Derivation::_label_ = "catStat";

DDI::Derivation::Derivation(std::string _ID)
{
    ID = _ID;
}

DDI::Derivation::Derivation(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Derivation::getXMLLabel() {
    return _label_;
}
