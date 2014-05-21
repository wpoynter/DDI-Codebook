#include "docdscr.h"

const std::string DDI::DocDscr::_label_ = "docDscr";

DDI::DocDscr::DocDscr(std::string _ID)
{
    ID = _ID;
}

DDI::DocDscr::DocDscr(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::DocDscr::getXMLLang() {
    return _label_;
}

void DDI::DocDscr::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Citation::_label_)
        {
            citation = new Citation();
        }
        else if (node->name() == DDI::Notes::_label_)
        {
            notes.push_back(new Notes());
        }
        else
        {
            //Throw warning
        }
    }
}

DDI::Citation *DDI::DocDscr::getCitation()
{
    return citation;
}
