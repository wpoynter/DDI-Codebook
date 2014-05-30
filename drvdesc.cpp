#include "drvdesc.h"

const std::string DDI::Drvdesc::_label_ = "drvdesc";

DDI::Drvdesc::Drvdesc(std::string _ID)
{
    ID = _ID;
}

DDI::Drvdesc::Drvdesc(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Drvdesc::getXMLLabel() {
    return _label_;
}
