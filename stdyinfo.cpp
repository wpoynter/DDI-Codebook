#include "stdyinfo.h"

const std::string DDI::StdyInfo::_label_ = "stdyInfo";

DDI::StdyInfo::StdyInfo(std::string _ID = "")
{
    ID = _ID;
}

DDI::StdyInfo::StdyInfo(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}


std::string DDI::StdyInfo::getXMLLabel() {
    return _label_;
}
