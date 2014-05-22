#include "ddientity.h"

std::string DDI::DDIEntity::getID() {
    return ID;
}

std::string DDI::DDIEntity::getLang() {
    return xml_lang;
}

std::string DDI::DDIEntity::getSource() {
    return source;
}

std::string DDI::DDIEntity::getContents() {
    return _contents_;
}

void DDI::DDIEntity::setID(std::string _ID) {
    ID = _ID;
}

void DDI::DDIEntity::setLang(std::string _xml_lang) {
    xml_lang = _xml_lang;
}

void DDI::DDIEntity::setSource(std::string _source) {
    source = _source;
}

void DDI::DDIEntity::setContents(std::string __contents_) {
    _contents_ = __contents_;
}

std::string DDI::DDIEntity::getXMLLabel() {
    return "[DDIENTITY]";
}

void DDI::DDIEntity::readNode(rapidxml::xml_node<> *_node) {
    for (rapidxml::xml_attribute<> *attr = _node->first_attribute();
         attr; attr = attr->next_attribute())
    {
        if (!readAttribute(attr->name(), attr->value()))
            std::cout << "Unrecognised attribute: " << attr->name() << " (" << attr->value() << ")" << std::endl;
    }
    _contents_ = _node->value();
}

bool DDI::DDIEntity::readAttribute(std::string _name, std::string _value) {
    if (_name == "ID")
    {
        ID = _value;
    }
    else if (_name == "xml-lang")
    {
        xml_lang = _value;
    }
    else if (_name == "source")
    {
        source = _value;
    }
    else {
        return false;
    }
    return true;
}
