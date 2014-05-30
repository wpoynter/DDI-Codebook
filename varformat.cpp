#include "varformat.h"

const std::string DDI::VarFormat::_label_ = "varFormat";

DDI::VarFormat::VarFormat(std::string _ID)
{
    ID = _ID;
}

DDI::VarFormat::VarFormat(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::VarFormat::getXMLLabel() {
    return _label_;
}

bool DDI::VarFormat::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "type")
    {
        type = _value;
    }
    else {
        return false;
    }
    return true;
}
