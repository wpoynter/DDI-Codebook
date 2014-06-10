#include "var.h"

#include "pipe.h"

const std::string DDI::Var::_label_ = "var";

DDI::Var::Var(std::string _ID) :
    Referenceable()
{
    ID = _ID;
}

DDI::Var::Var(rapidxml::xml_node<> *_node) :
    Referenceable()
{
    readNode(_node);
}

std::string DDI::Var::getXMLLabel() {
    return _label_;
}

void DDI::Var::readNode(rapidxml::xml_node<> *_node) {
    DDIEntity::readNode(_node);
    for (rapidxml::xml_node<> *node = _node->first_node();
         node; node = node->next_sibling())
    {
        if (node->name() == DDI::Location::_label_)
        {
            location.push_back(new Location(node));
        }
        else if (node->name() == DDI::Labl::_label_)
        {
            labl.push_back(new Labl(node));
        }
        else if (node->name() == DDI::Qstn::_label_)
        {
            qstn.push_back(new Qstn(node));
        }
        else if (node->name() == DDI::Invalrng::_label_)
        {
            invalrng.push_back(new Invalrng(node));
        }
        else if (node->name() == DDI::Universe::_label_)
        {
            universe.push_back(new Universe(node));
        }
        else if (node->name() == DDI::SumStat::_label_)
        {
            sumStat.push_back(new SumStat(node));
        }
        else if (node->name() == DDI::Txt::_label_)
        {
            txt.push_back(new Txt(node));
        }
        else if (node->name() == DDI::CatgryGrp::_label_)
        {
            catgryGrp.push_back(new CatgryGrp(node));
        }
        else if (node->name() == DDI::Catgry::_label_)
        {
            catgry.push_back(new Catgry(node));
        }
        else if (node->name() == DDI::Concept::_label_)
        {
            concept.push_back(new Concept(node));
        }
        else if (node->name() == DDI::Derivation::_label_)
        {
            derivation = new Derivation(node);
        }
        else if (node->name() == DDI::VarFormat::_label_)
        {
            varFormat = new VarFormat(node);
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

bool DDI::Var::readAttribute(std::string _name, std::string _value) {
    if (DDIEntity::readAttribute(_name, _value)) return true;
    if (_name == "name")
    {
        name = _value;
    }
    else if(_name == "files")
    {
        files = _value;
    }
    else if(_name == "dcml")
    {
        dcml = _value;
    }
    else if(_name == "intrvl")
    {
        intrvl = _value;
    }
    else
    {
        return false;
    }
    return true;
}
