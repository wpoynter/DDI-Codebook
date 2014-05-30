#include "catgry.h"

const std::string DDI::Catgry::_label_ = "catgry";

DDI::Catgry::Catgry(std::string _ID)
{
    ID = _ID;
}

DDI::Catgry::Catgry(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Catgry::getXMLLabel() {
    return _label_;
}

void DDI::Catgry::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::CatValu::_label_)
        {
            catValu = new CatValu(node);
        }
        else if (node->name() == DDI::Labl::_label_)
        {
            labl.push_back(new Labl(node));
        }
        else if (node->name() == DDI::Txt::_label_)
        {
            txt.push_back(new Txt(node));
        }
        else if (node->name() == DDI::CatStat::_label_)
        {
            catStat.push_back(new CatStat(node));
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}
