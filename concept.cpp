#include "concept.h"

const std::string DDI::Concept::_label_ = "concept";

DDI::Concept::Concept(std::string _ID)
{
    ID = _ID;
}

DDI::Concept::Concept(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Concept::getXMLLabel() {
    return _label_;
}
