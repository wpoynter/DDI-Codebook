#include "verstmt.h"

const std::string DDI::VerStmt::_label_ = "verStmt";

DDI::VerStmt::VerStmt(std::string _ID)
{
    ID = _ID;
}

DDI::VerStmt::VerStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::VerStmt::getXMLLang() {
    return _label_;
}
