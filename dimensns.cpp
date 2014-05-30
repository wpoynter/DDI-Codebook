#include "dimensns.h"

const std::string DDI::Dimensns::_label_ = "dimensns";

DDI::Dimensns::Dimensns(std::string _ID)
{
    ID = _ID;
}

DDI::Dimensns::Dimensns(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Dimensns::getXMLLabel() {
    return _label_;
}

void DDI::Dimensns::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::CaseQnty::_label_)
        {
            caseQnty.push_back(new CaseQnty(node));
        }
        else if (node->name() == DDI::VarQnty::_label_)
        {
            varQnty.push_back(new VarQnty(node));
        }
        else if (node->name() == DDI::LogRecl::_label_)
        {
            logRecl.push_back(new LogRecl(node));
        }
        else if (node->name() == DDI::RecPrCas::_label_)
        {
            recPrCas.push_back(new RecPrCas(node));
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}
