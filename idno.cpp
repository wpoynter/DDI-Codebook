#include "idno.h"

const std::string DDI::IDNo::_label_ = "IDNo";

DDI::IDNo::IDNo(std::string _ID = "")
{
    ID = _ID;
}

DDI::IDNo::IDNo(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::IDNo::getXMLLabel() {
    return _label_;
}
