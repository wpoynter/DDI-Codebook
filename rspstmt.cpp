#include "rspstmt.h"

const std::string DDI::RspStmt::_label_ = "rspStmt";

DDI::RspStmt::RspStmt(std::string _ID)
{
    ID = _ID;
}

DDI::RspStmt::RspStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::RspStmt::getXMLLabel() {
    return _label_;
}

void DDI::RspStmt::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::AuthEntry::_label_)
        {
            authEntry.push_back(new AuthEntry(node));
        } else if (node->name() == DDI::OthId::_label_)
        {
            othId.push_back(new OthId(node));
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}

void DDI::RspStmt::printAuthEnty()
{
    for (std::vector<AuthEntry*>::iterator iter = authEntry.begin();
         iter != authEntry.end(); iter++)
    {
        std::cout << "Authoring Entity: " << (*iter)->getContents() << std::endl;
    }
}

void DDI::RspStmt::printAuthEnty(int selection)
{
    std::cout << "Authoring Entity: " << authEntry[selection]->getContents() << std::endl;
}

void DDI::RspStmt::printOthId()
{
    for (std::vector<OthId*>::iterator iter = othId.begin();
         iter != othId.end(); iter++)
    {
        std::cout << "Other Identification: " << (*iter)->getContents() << std::endl;
    }
}

void DDI::RspStmt::printOthId(int selection)
{
    std::cout << "Other Identification: " << othId[selection]->getContents() << std::endl;
}
