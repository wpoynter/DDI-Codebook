#include "recprcas.h"

const std::string DDI::RecPrCas::_label_ = "recPrCas";

DDI::RecPrCas::RecPrCas(std::string _ID)
{
    ID = _ID;
}

DDI::RecPrCas::RecPrCas(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::RecPrCas::getXMLLabel() {
    return _label_;
}
