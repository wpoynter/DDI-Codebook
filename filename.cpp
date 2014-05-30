#include "filename.h"

const std::string DDI::FileName::_label_ = "fileName";

DDI::FileName::FileName(std::string _ID)
{
    ID = _ID;
}

DDI::FileName::FileName(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::FileName::getXMLLabel() {
    return _label_;
}
