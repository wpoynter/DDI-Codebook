#include "datadscr.h"

#include "pipe.h"

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
            varGrp.push_back(std::make_shared<VarGrp>(node));
        }
        else if (node->name() == DDI::Var::_label_)
        {
            var.push_back(std::make_shared<Var>(node));
        }
        else
        {
            out << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}

DDI::VarGrpPtrs::iterator DDI::DataDscr::getVarGrpBegin()
{
    return varGrp.begin();
}

DDI::VarGrpPtrs::iterator DDI::DataDscr::getVarGrpEnd()
{
    return varGrp.end();
}

DDI::VarPtrs::iterator DDI::DataDscr::getVarBegin()
{
    return var.begin();
}

DDI::VarPtrs::iterator DDI::DataDscr::getVarEnd()
{
    return var.end();
}
