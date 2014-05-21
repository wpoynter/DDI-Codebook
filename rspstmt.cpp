#include "rspstmt.h"

const std::string DDI::RspStmt::_label_ = "docDscr";

DDI::RspStmt::RspStmt(std::string _ID)
{
    ID = _ID;
}

DDI::RspStmt::RspStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::RspStmt::getXMLLang() {
    return _label_;
}
