#include "varqnty.h"

const std::string DDI::VarQnty::_label_ = "varQnty";

DDI::VarQnty::VarQnty(std::string _ID)
{
    ID = _ID;
}

DDI::VarQnty::VarQnty(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::VarQnty::getXMLLabel() {
    return _label_;
}
