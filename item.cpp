#include "item.h"

const std::string DDI::Item::_label_ = "item";

DDI::Item::Item(std::string _ID = "")
{
    ID = _ID;
}

DDI::Item::Item(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Item::getXMLLabel() {
    return _label_;
}

bool DDI::Item::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "UNITS")
    {
        UNITS = _value;
    }
    else if (_name == "VALUE")
    {
        VALUE = _value;
    }
    else {
        return false;
    }
    return true;
}
