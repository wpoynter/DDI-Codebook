#include "codebook.h"

#include <iterator>

const std::string DDI::Codebook::_label_ = "codeBook";

DDI::Codebook::Codebook()
{
}

void DDI::Codebook::test() {
    DocDscr *temp = docDscr.front();
    std::cout << temp->getXMLLabel() << std::endl;
    Citation *citation = temp->getCitation();
    std::cout << citation->getXMLLabel() << std::endl;
    TitleStmt *titlStmt = citation->getTitlStmt();
    std::cout << titlStmt->getXMLLabel() << std::endl;
    Titl *titl = titlStmt->getTitl();
    std::cout << titl->getXMLLabel() << std::endl;
    std::cout << titl->getContents() << std::endl;
    std::cout << (*(stdyDscr.front()->getCitationBegin()))->getTitlStmt()->getTitl()->getContents() << std::endl;
    std::cout << stdyDscr.front()->getXMLLabel() << std::endl << std::endl;
    printStudies();
}

std::string DDI::Codebook::getXMLLang() {
    return _label_;
}

void DDI::Codebook::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::DocDscr::_label_)
        {
            docDscr.push_back(new DocDscr(node));
        }
        else if (node->name() == DDI::StdyDscr::_label_)
        {
            stdyDscr.push_back(new StdyDscr(node));
        }
        else if (node->name() == DDI::DataDscr::_label_)
        {
            dataDscr.push_back(new DataDscr(node));
        }
    }
}

void DDI::Codebook::printStudies() {
    if (stdyDscr.size() == 0)
    {
        std::cout << "There are no studies" << std::endl;
    }
    else if (stdyDscr.size() == 1)
    {
        printStudy();
    }
    else
    {
        int i = 0;
        for (std::vector<StdyDscr*>::iterator iter = stdyDscr.begin();
             iter != stdyDscr.end(); iter++)
        {
            i++;
            std::cout << "[" << i << "] ";
            int citations = std::distance((*iter)->getCitationBegin(),(*iter)->getCitationEnd());
            if (citations == 0)
            {
                std::cout << "No citations." << std::endl;
            }
            else if (citations == 1)
            {
                std::cout << "Title: " <<
                    (*((*iter)->getCitationBegin()))->getTitlStmt()->getTitl()->getContents()
                    << std::endl;
            }
            else
            {
                std::cout << citations << " citations." << std::endl;
            }
        }
    }
}

void DDI::Codebook::printStudy(int selection) {
    std::vector<StdyDscr*>::iterator sd = stdyDscr.begin();
    std::advance(sd, selection);
    for (std::vector<Citation*>::iterator iter = (*sd)->getCitationBegin();
         iter != (*sd)->getCitationEnd(); iter++)
    {
        (*iter)->printTitlStmt();
        (*iter)->printRspStmt();
        (*iter)->printProdStmt();
        if (std::next(iter) != (*sd)->getCitationEnd())
        {
            std::cout << "==================" << std::endl;
        }
    }
}
