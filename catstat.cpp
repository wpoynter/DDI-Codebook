#include "catstat.h"

const std::string DDI::CatStat::_label_ = "catStat";

DDI::CatStat::CatStat(std::string _ID)
{
    ID = _ID;
}

DDI::CatStat::CatStat(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::CatStat::getXMLLabel() {
    return _label_;
}
