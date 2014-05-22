#include "prodstmt.h"

const std::string DDI::ProdStmt::_label_ = "prodStmt";

DDI::ProdStmt::ProdStmt(std::string _ID)
{
    ID = _ID;
}

DDI::ProdStmt::ProdStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::ProdStmt::getXMLLabel() {
    return _label_;
}

void DDI::ProdStmt::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Producer::_label_)
        {
            producer.push_back(new Producer(node));
        }
        else if (node->name() == DDI::Copyright::_label_)
        {
            copyright = new Copyright(node);
        }
        else if (node->name() == DDI::ProdDate::_label_)
        {
            prodDate.push_back(new ProdDate(node));
        }
        else if (node->name() == DDI::Software::_label_)
        {
            software.push_back(new Software(node));
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of prodStmt" << std::endl;
        }
    }
}
