#include "codebook.h"

#include <iterator>

#include "pipe.h"

const std::string DDI::Codebook::_label_ = "codeBook";

DDI::Codebook::Codebook()
{
}

void DDI::Codebook::linkIDs()
{
    MultiRefID<VarGrp>::linkAll();
    MultiRefID<Var>::linkAll();
}

void DDI::Codebook::test()
{
    /*DocDscr *temp = docDscr.front();
    out << temp->getXMLLabel() << std::endl;
    Citation *citation = temp->getCitation();
    out << citation->getXMLLabel() << std::endl;
    TitleStmt *titlStmt = citation->getTitlStmt();
    out << titlStmt->getXMLLabel() << std::endl;
    Titl *titl = titlStmt->getTitl();
    out << titl->getXMLLabel() << std::endl;
    out << titl->getContents() << std::endl;
    out << (*(stdyDscr.front()->getCitationBegin()))->getTitlStmt()->getTitl()->getContents() << std::endl;
    out << stdyDscr.front()->getXMLLabel() << std::endl << std::endl;
    printStudies();*/
}

std::string DDI::Codebook::getXMLLang()
{
    return _label_;
}

void DDI::Codebook::readNode(rapidxml::xml_node<> *_node)
{
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::DocDscr::_label_)
        {
            docDscr.push_back(std::make_shared<DocDscr>(node));
        }
        else if (node->name() == DDI::StdyDscr::_label_)
        {
            stdyDscr.push_back(std::make_shared<StdyDscr>(node));
        }
        else if (node->name() == DDI::FileDscr::_label_)
        {
            fileDscr.push_back(std::make_shared<FileDscr>(node));
        }
        else if (node->name() == DDI::DataDscr::_label_)
        {
            dataDscr.push_back(std::make_shared<DataDscr>(node));
        }
        else if (node->name() == DDI::OtherMat::_label_)
        {
            otherMat.push_back(std::make_shared<OtherMat>(node));
        }
    }
}

void DDI::Codebook::printStudies()
{
    if (stdyDscr.size() == 0)
    {
        out << "There are no studies" << std::endl;
    }
    else if (stdyDscr.size() == 1)
    {
        printStudy();
    }
    else
    {
        int i = 0;
        for (StdyDscrPtrs::iterator iter = stdyDscr.begin();
             iter != stdyDscr.end(); iter++)
        {
            i++;
            out << "[" << i << "] ";
            int citations = std::distance((*iter)->getCitationBegin(),(*iter)->getCitationEnd());
            if (citations == 0)
            {
                out << "No citations." << std::endl;
            }
            else if (citations == 1)
            {
                out << "Title: " <<
                    (*((*iter)->getCitationBegin()))->getTitlStmt()->getTitl()->getContents()
                    << std::endl;
            }
            else
            {
                out << citations << " citations." << std::endl;
            }
        }
    }
}

void DDI::Codebook::printStudy(int selection)
{
    StdyDscrPtrs::iterator sd = stdyDscr.begin();
    std::advance(sd, selection);
    for (std::vector<Citation*>::iterator iter = (*sd)->getCitationBegin();
         iter != (*sd)->getCitationEnd(); iter++)
    {
        (*iter)->printTitlStmt();
        (*iter)->printRspStmt();
        (*iter)->printProdStmt();
        if (std::next(iter) != (*sd)->getCitationEnd())
        {
            out << "==================" << std::endl;
        }
    }
}

void DDI::Codebook::printVariableTree()
{
    int currentLevel = 0;
    out << "codebook" << std::endl;
    for (std::vector<std::shared_ptr<DataDscr> >::iterator iter_data = dataDscr.begin();
         iter_data != dataDscr.end(); iter_data++)
    {
        for (std::vector<std::shared_ptr<VarGrp> >::iterator iter_vg =  (*iter_data)->getVarGrpBegin();
             iter_vg != (*iter_data)->getVarGrpEnd(); iter_vg++)
        {
            if (currentLevel > 1)
            {
                out << std::endl;
            }
            currentLevel = 1;
            if (iter_vg->use_count() == 1)
            {
                out << DDI::Utils::indent(currentLevel) <<
                       "[" << (*iter_vg)->getID() << "] ";
                for (std::vector<Labl*>::iterator iter_lb = (*iter_vg)->getLablBegin();
                     iter_lb != (*iter_vg)->getLablEnd(); iter_lb++)
                {
                    out << (*iter_lb)->getContents();
                }
                out << std::endl;
            }
        }
    }
}
