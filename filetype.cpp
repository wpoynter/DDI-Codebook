#include "filetype.h"

const std::string DDI::FileType::_label_ = "fileType";

DDI::FileType::FileType(std::string _ID)
{
    ID = _ID;
}

DDI::FileType::FileType(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::FileType::getXMLLabel() {
    return _label_;
}
