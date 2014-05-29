#include "authentry.h"

const std::string DDI::AuthEntry::_label_ = "AuthEnty";

DDI::AuthEntry::AuthEntry(std::string _ID)
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

bool DDI::AuthEntry::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "affilation")
    {
        affiliation = _value;
    }
    else {
        return false;
    }
    return true;
}
