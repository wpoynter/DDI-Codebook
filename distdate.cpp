#include "distdate.h"

const std::string DDI::DistDate::_label_ = "distDate";

DDI::DistDate::DistDate(std::string _ID)
{
    ID = _ID;
}

DDI::DistDate::DistDate(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::DistDate::getXMLLabel() {
    return _label_;
}

bool DDI::DistDate::readAttribute(std::string _name, std::string _value) {
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
