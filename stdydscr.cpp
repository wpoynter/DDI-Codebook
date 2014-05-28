#include "stdydscr.h"

const std::string DDI::StdyDscr::_label_ = "stdyDscr";

DDI::StdyDscr::StdyDscr(std::string _ID)
{
    ID = _ID;
}

DDI::StdyDscr::StdyDscr(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}


std::string DDI::StdyDscr::getXMLLabel() {
    return _label_;
}

void DDI::StdyDscr::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Citation::_label_)
        {
            citation.push_back(new Citation(node));
        }
        else if (node->name() == DDI::StdyInfo::_label_)
        {
            stdyInfo.push_back(new StdyInfo(node));
        }
        else if (node->name() == DDI::Method::_label_)
        {
            method.push_back(new Method(node));
        }
        else if (node->name() == DDI::DataAccs::_label_)
        {
            dataAccs.push_back(new DataAccs(node));
        }
        else if (node->name() == DDI::Notes::_label_)
        {
            notes.push_back(new Notes(node));
        }
        else
        {
            //Throw warning
        }
    }
}

std::vector<DDI::Citation*>::iterator DDI::StdyDscr::getCitationBegin()
{
    return citation.begin();
}

std::vector<DDI::Citation*>::iterator DDI::StdyDscr::getCitationEnd()
{
    return citation.end();
}
