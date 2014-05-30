#include "caseqnty.h"

const std::string DDI::CaseQnty::_label_ = "caseQnty";

DDI::CaseQnty::CaseQnty(std::string _ID)
{
    ID = _ID;
}

DDI::CaseQnty::CaseQnty(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::CaseQnty::getXMLLabel() {
    return _label_;
}
