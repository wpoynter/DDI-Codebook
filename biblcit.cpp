#include "biblcit.h"

const std::string DDI::BiblCit::_label_ = "docDscr";

DDI::BiblCit::BiblCit(std::string _ID)
{
    ID = _ID;
}

DDI::BiblCit::BiblCit(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::BiblCit::getXMLLang() {
    return _label_;
}
