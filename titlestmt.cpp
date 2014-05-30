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
        } else if (node->name() == DDI::IDNo::_label_)
        {
            idno.push_back(new IDNo(node));
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}

DDI::Titl *DDI::TitleStmt::getTitl()
{
    return titl;
}

std::vector<DDI::IDNo*>::iterator DDI::TitleStmt::getIDNoBegin()
{
    return idno.begin();
}

std::vector<DDI::IDNo*>::iterator DDI::TitleStmt::getIDNoEnd()
{
    return idno.end();
}

void DDI::TitleStmt::printTitl()
{
    std::cout << "Title: " << titl->getContents() << std::endl;
}

void DDI::TitleStmt::printIDNo()
{
    for (std::vector<IDNo*>::iterator iter = idno.begin();
         iter != idno.end(); iter++)
    {
        std::cout << "ID number: " << (*iter)->getContents() << std::endl;
    }
}

void DDI::TitleStmt::printIDNo(int selection)
{
    std::cout << "ID number: " << idno[selection]->getContents() << std::endl;
}
