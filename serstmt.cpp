#include "serstmt.h"

const std::string DDI::SerStmt::_label_ = "serStmt";

DDI::SerStmt::SerStmt(std::string _ID)
{
    ID = _ID;
}

DDI::SerStmt::SerStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::SerStmt::getXMLLang() {
    return _label_;
}
