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
        else if (node->name() == DDI::FundAg::_label_)
        {
            fundAg.push_back(new FundAg(node));
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of prodStmt" << std::endl;
        }
    }
}

void DDI::ProdStmt::printProducer()
{
    for (std::vector<Producer*>::iterator iter = producer.begin();
         iter != producer.end(); iter++)
    {
        std::cout << "Producer: " << (*iter)->getContents() << std::endl;
    }
}

void DDI::ProdStmt::printProducer(int selection)
{
    std::cout << "Producer: " << producer[selection]->getContents() << std::endl;
}

void DDI::ProdStmt::printCopyright()
{
    std::cout << "Copyright: " << copyright->getContents() << std::endl;
}

void DDI::ProdStmt::printProdDate()
{
    for (std::vector<ProdDate*>::iterator iter = prodDate.begin();
         iter != prodDate.end(); iter++)
    {
        std::cout << "Date of Production: " << (*iter)->getContents() << std::endl;
    }
}

void DDI::ProdStmt::printProdDate(int selection)
{
    std::cout << "Date of Production: " << prodDate[selection]->getContents() << std::endl;
}

void DDI::ProdStmt::printSoftware()
{
    for (std::vector<Software*>::iterator iter = software.begin();
         iter != software.end(); iter++)
    {
        std::cout << "Software: " << (*iter)->getContents() << std::endl;
    }
}

void DDI::ProdStmt::printSoftware(int selection)
{
    std::cout << "Software: " << software[selection]->getContents() << std::endl;
}

void DDI::ProdStmt::printFundAg()
{
    for (std::vector<FundAg*>::iterator iter = fundAg.begin();
         iter != fundAg.end(); iter++)
    {
        std::cout << "Funding Agency: " << (*iter)->getContents() << std::endl;
    }
}

void DDI::ProdStmt::printFundAg(int selection)
{
    std::cout << "Funding Agency: " << fundAg[selection]->getContents() << std::endl;
}
