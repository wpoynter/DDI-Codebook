#include "diststmt.h"

#include "pipe.h"

const std::string DDI::DistStmt::_label_ = "distStmt";

DDI::DistStmt::DistStmt(std::string _ID)
{
    ID = _ID;
}

DDI::DistStmt::DistStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::DistStmt::getXMLLabel() {
    return _label_;
}

void DDI::DistStmt::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Distrbtr::_label_)
        {
            distrbtr.push_back(new Distrbtr(node));
        }
        else if (node->name() == DDI::DistDate::_label_)
        {
            distDate = new DistDate(node);
        }
        else
        {
            out << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}
