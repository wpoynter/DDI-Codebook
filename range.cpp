#include "range.h"

const std::string DDI::Range::_label_ = "range";

DDI::Range::Range(std::string _ID)
{
    ID = _ID;
}

DDI::Range::Range(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Range::getXMLLabel() {
    return _label_;
}

bool DDI::Range::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "UNITS")
    {
        UNITS = _value;
    }
    else if (_name == "min")
    {
        min = _value;
    }
    else if (_name == "max")
    {
        max = _value;
    }
    else {
        return false;
    }
    return true;
}
