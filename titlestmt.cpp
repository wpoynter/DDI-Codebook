#include "titlestmt.h"

const std::string DDI::TitleStmt::_label_ = "titlStmt";

DDI::TitleStmt::TitleStmt(std::string _ID)
{
    ID = _ID;
}

DDI::TitleStmt::TitleStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::TitleStmt::getXMLLabel() {
    return _label_;
}

void DDI::TitleStmt::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Titl::_label_)
        {
            titl = new Titl(node);
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of titlStmt" << std::endl;
        }
    }
}

DDI::Titl *DDI::TitleStmt::getTitl()
{
    return titl;
}
