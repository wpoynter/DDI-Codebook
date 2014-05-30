#include "othermat.h"

const std::string DDI::OtherMat::_label_ = "otherMat";

DDI::OtherMat::OtherMat(std::string _ID)
{
    ID = _ID;
}

DDI::OtherMat::OtherMat(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::OtherMat::getXMLLabel() {
    return _label_;
}

void DDI::OtherMat::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Labl::_label_)
        {
            labl.push_back(new Labl(node));
        }
        else if (node->name() == DDI::Txt::_label_)
        {
            txt = new Txt(node);
        }
        else if (node->name() == DDI::Notes::_label_)
        {
            notes.push_back(new Notes(node));
        }
        else if (node->name() == DDI::Table::_label_)
        {
            table.push_back(new Table(node));
        }
        else if (node->name() == DDI::Citation::_label_)
        {
            citation = new Citation(node);
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}


bool DDI::OtherMat::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "URI")
    {
        URI = _value;
    }
    else {
        return false;
    }
    return true;
}
