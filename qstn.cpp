#include "qstn.h"

const std::string DDI::Qstn::_label_ = "qstn";

DDI::Qstn::Qstn(std::string _ID)
{
    ID = _ID;
}

DDI::Qstn::Qstn(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Qstn::getXMLLabel() {
    return _label_;
}

void DDI::Qstn::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::QstnLit::_label_)
        {
            qstnLit.push_back(new QstnLit(node));
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}
