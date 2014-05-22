#include "version.h"

const std::string DDI::Version::_label_ = "version";

DDI::Version::Version(std::string _ID)
{
    ID = _ID;
}

DDI::Version::Version(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Version::getXMLLabel() {
    return _label_;
}

bool DDI::Version::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "date")
    {
        date = DDI::Date(_value);
    }
    else {
        return false;
    }
    return true;
}
