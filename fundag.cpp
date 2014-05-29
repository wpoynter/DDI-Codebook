#include "fundag.h"

const std::string DDI::FundAg::_label_ = "fundAg";

DDI::FundAg::FundAg(std::string _ID)
{
    ID = _ID;
}

DDI::FundAg::FundAg(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::FundAg::getXMLLabel() {
    return _label_;
}
