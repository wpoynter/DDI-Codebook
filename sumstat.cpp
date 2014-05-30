#include "sumstat.h"

const std::string DDI::SumStat::_label_ = "sumStat";

DDI::SumStat::SumStat(std::string _ID)
{
    ID = _ID;
}

DDI::SumStat::SumStat(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::SumStat::getXMLLabel() {
    return _label_;
}
