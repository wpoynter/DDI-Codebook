#include "prodstmt.h"

const std::string DDI::ProdStmt::_label_ = "prodStmt";

DDI::ProdStmt::ProdStmt(std::string _ID)
{
    ID = _ID;
}

DDI::ProdStmt::ProdStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::ProdStmt::getXMLLang() {
    return _label_;
}
