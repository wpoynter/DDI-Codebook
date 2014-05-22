#include "producer.h"

const std::string DDI::Producer::_label_ = "software";

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
