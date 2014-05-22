#include "notes.h"

const std::string DDI::Notes::_label_ = "notes";

DDI::Notes::Notes(std::string _ID)
{
    ID = _ID;
}

DDI::Notes::Notes(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Notes::getXMLLabel() {
    return _label_;
}

