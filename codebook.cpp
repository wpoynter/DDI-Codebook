#include "codebook.h"

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
    std::cout << stdyDscr.front()->getXMLLang() << std::endl;
}

std::string DDI::Codebook::getXMLLang() {
    return _label_;
}

void DDI::Codebook::readAttribute(std::string _name, std::string _value) {
    DDIEntity::readAttribute(_name, _value);
}

void DDI::Codebook::readNode(rapidxml::xml_node<> *_node) {
    for (rapidxml::xml_attribute<> *attr = _node->first_attribute();
         attr; attr = attr->next_attribute())
    {
        readAttribute(attr->name(), attr->value());
    }
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::DocDscr::_label_)
        {
            docDscr.push_back(new DocDscr(node));
        }
        else if (node->name() == DDI::StdyDscr::_label_)
        {
            stdyDscr.push_back(new StdyDscr());
        }
    }
}
