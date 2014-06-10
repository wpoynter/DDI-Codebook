#include "serstmt.h"

#include "pipe.h"

const std::string DDI::SerStmt::_label_ = "serStmt";

DDI::SerStmt::SerStmt(std::string _ID)
{
    ID = _ID;
}

DDI::SerStmt::SerStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::SerStmt::getXMLLabel() {
    return _label_;
}

void DDI::SerStmt::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::SerName::_label_)
        {
            serName.push_back(new SerName(node));
        }
        else
        {
            out << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}
