#include "dataaccs.h"

const std::string DDI::DataAccs::_label_ = "dataAccs";

DDI::DataAccs::DataAccs(std::string _ID = "")
{
    ID = _ID;
}

DDI::DataAccs::DataAccs(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}


std::string DDI::DataAccs::getXMLLabel() {
    return _label_;
}
