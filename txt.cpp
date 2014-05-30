#include "txt.h"

const std::string DDI::Txt::_label_ = "txt";

DDI::Txt::Txt(std::string _ID)
{
    ID = _ID;
}

DDI::Txt::Txt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Txt::getXMLLabel() {
    return _label_;
}
