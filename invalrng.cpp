#include "invalrng.h"

const std::string DDI::Invalrng::_label_ = "invalrng";

DDI::Invalrng::Invalrng(std::string _ID)
{
    ID = _ID;
}

DDI::Invalrng::Invalrng(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::Invalrng::getXMLLabel() {
    return _label_;
}

void DDI::Invalrng::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Range::_label_)
        {
            range.push_back(new Range(node));
        }
        else if (node->name() == DDI::Item::_label_)
        {
            item.push_back(new Item(node));
        }
        else if (node->name() == DDI::Notes::_label_)
        {
            notes.push_back(new Notes(node));
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of citation" << std::endl;
        }
    }
}
