#include "table.h"

const std::string DDI::Table::_label_ = "table";

DDI::Table::Table(std::string _ID)
{
    ID = _ID;
}

DDI::Table::Table(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Table::getXMLLabel() {
    return _label_;
}
