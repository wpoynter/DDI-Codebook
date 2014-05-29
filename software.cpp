#include "software.h"

const std::string DDI::Software::_label_ = "software";

DDI::Software::Software(std::string _ID)
{
    ID = _ID;
}

DDI::Software::Software(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Software::getXMLLabel() {
    return _label_;
}

bool DDI::Software::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "date")
    {
        date = DDI::Date(_value);
    }
    else if (_name == "version")
    {
        version = _value;
    }
    else {
        return false;
    }
    return true;
}
