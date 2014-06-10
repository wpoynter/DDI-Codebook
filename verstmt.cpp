#include "verstmt.h"

#include "pipe.h"

const std::string DDI::VerStmt::_label_ = "verStmt";

DDI::VerStmt::VerStmt(std::string _ID)
{
    ID = _ID;
}

DDI::VerStmt::VerStmt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::VerStmt::getXMLLabel() {
    return _label_;
}

void DDI::VerStmt::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Version::_label_)
        {
            version = new Version(node);
        }
        else if (node->name() == DDI::Notes::_label_)
        {
            notes.push_back(new Notes(node));
        }
        else
        {
            out << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}
