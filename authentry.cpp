#include "authentry.h"

const std::string DDI::AuthEntry::_label_ = "AuthEnty";

DDI::AuthEntry::AuthEntry(std::string _ID = "")
{
    ID = _ID;
}

DDI::AuthEntry::AuthEntry(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}


std::string DDI::AuthEntry::getXMLLabel() {
    return _label_;
}
