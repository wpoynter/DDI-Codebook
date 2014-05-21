#include "diststmt.h"

const std::string DDI::DistStmt::_label_ = "distStmt";

DDI::DistStmt::DistStmt(std::string _ID)
{
    ID = _ID;
}

DDI::DistStmt::DistStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::DistStmt::getXMLLang() {
    return _label_;
}
