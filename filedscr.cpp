#include "filedscr.h"

#include "pipe.h"

const std::string DDI::FileDscr::_label_ = "fileDscr";

DDI::FileDscr::FileDscr(std::string _ID)
{
    ID = _ID;
}

DDI::FileDscr::FileDscr(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::FileDscr::getXMLLabel() {
    return _label_;
}

void DDI::FileDscr::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::FileTxt::_label_)
        {
            fileTxt.push_back(new FileTxt(node));
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
