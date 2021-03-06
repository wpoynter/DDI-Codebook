#include "citation.h"

#include "pipe.h"

const std::string DDI::Citation::_label_ = "citation";


DDI::Citation::Citation(std::string _ID)
{
    ID = _ID;
}

DDI::Citation::Citation(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Citation::getXMLLabel() {
    return _label_;
}

void DDI::Citation::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::TitleStmt::_label_)
        {
            titleStmt = new TitleStmt(node);
        }
        else if (node->name() == DDI::ProdStmt::_label_)
        {
            prodStmt = new ProdStmt(node);
        }
        else if (node->name() == DDI::VerStmt::_label_)
        {
            verStmt.push_back(new VerStmt(node));
        }
        else if (node->name() == DDI::RspStmt::_label_)
        {
            rspStmt = new RspStmt(node);
        }
        else if (node->name() == DDI::DistStmt::_label_)
        {
            distStmt = new DistStmt(node);
        }
        else if (node->name() == DDI::SerStmt::_label_)
        {
            serStmt = new SerStmt(node);
        }
        else if (node->name() == DDI::BiblCit::_label_)
        {
            biblCit = new BiblCit(node);
        }
        else
        {
            out << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}

DDI::TitleStmt *DDI::Citation::getTitlStmt()
{
    return titleStmt;
}

void DDI::Citation::printTitlStmt()
{
    titleStmt->printTitl();
    titleStmt->printIDNo();
}

void DDI::Citation::printTitl()
{
    titleStmt->printTitl();
}

void DDI::Citation::printIDNo()
{
    titleStmt->printIDNo();
}

void DDI::Citation::printIDNo(int selection)
{
    titleStmt->printIDNo(selection);
}

void DDI::Citation::printRspStmt()
{
    rspStmt->printAuthEnty();
    rspStmt->printOthId();
}

void DDI::Citation::printProdStmt()
{
    prodStmt->printProducer();
    prodStmt->printCopyright();
    prodStmt->printProdDate();
    prodStmt->printSoftware();
    prodStmt->printFundAg();
}
