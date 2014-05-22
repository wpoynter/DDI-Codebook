#include "proddate.h"

const std::string DDI::ProdDate::_label_ = "prodDate";

DDI::ProdDate::ProdDate(std::string _ID)
{
    ID = _ID;
}

DDI::ProdDate::ProdDate(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::ProdDate::getXMLLabel() {
    return _label_;
}

bool DDI::ProdDate::readAttribute(std::string _name, std::string _value) {
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
