#include "filetxt.h"

const std::string DDI::FileTxt::_label_ = "fileTxt";

DDI::FileTxt::FileTxt(std::string _ID)
{
    ID = _ID;
}

DDI::FileTxt::FileTxt(rapidxml::xml_node<> *_node)
{
    readNode(_node);
}

std::string DDI::FileTxt::getXMLLabel() {
    return _label_;
}

void DDI::FileTxt::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::FileName::_label_)
        {
            fileName = new FileName(node);
        }
        else if (node->name() == DDI::Dimensns::_label_)
        {
            dimensns = new Dimensns(node);
        }
        else if (node->name() == DDI::FileType::_label_)
        {
            fileType = new FileType(node);
        }
        else
        {
            std::cout << node->name() << " is not recogonised as a child of " << _label_ << std::endl;
        }
    }
}
