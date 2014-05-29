#include "datadscr.h"

const std::string DDI::DataDscr::_label_ = "dataDscr";

DDI::DataDscr::DataDscr(std::string _ID)
{
    ID = _ID;
}

DDI::DataDscr::DataDscr(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::DataDscr::getXMLLabel() {
    return _label_;
}

void DDI::DataDscr::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::VarGrp::_label_)
        {
            varGrp.push_back(new VarGrp(node));
        }
        else if (node->name() == DDI::Var::_label_)
        {
            var.push_back(new Var(node));
        }
        else
        {
            //Throw warning
        }
    }
}
