#include "location.h"

const std::string DDI::Location::_label_ = "location";

DDI::Location::Location(std::string _ID)
{
    ID = _ID;
}

DDI::Location::Location(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Location::getXMLLabel() {
    return _label_;
}

bool DDI::Location::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "StartPos")
    {
        StartPos = _value;
    }
    else if (_name == "EndPos")
    {
        EndPos = _value;
    }
    else if (_name == "width")
    {
        width = _value;
    }
    else {
        return false;
    }
    return true;
}
