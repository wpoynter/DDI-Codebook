#include "qstnlit.h"

const std::string DDI::QstnLit::_label_ = "qstnLit";

DDI::QstnLit::QstnLit(std::string _ID)
{
    ID = _ID;
}

DDI::QstnLit::QstnLit(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::QstnLit::getXMLLabel() {
    return _label_;
}
