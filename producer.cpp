#include "producer.h"

const std::string DDI::Producer::_label_ = "producer";

DDI::Producer::Producer(std::string _ID = "")
{
    ID = _ID;
}

DDI::Producer::Producer(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Producer::getXMLLabel() {
    return _label_;
}

bool DDI::Producer::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "affiliation")
    {
        affiliation = _value;
    }
    else if (_name == "abbr")
    {
        abbr = _value;
    }
    else
    {
        return false;
    }
    return true;
}
