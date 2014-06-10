#ifndef DDIENTITY_H
#define DDIENTITY_H

#include <string>
#include "rapidxml-1.13/rapidxml.hpp"

namespace DDI {

class DDIEntity
{
protected:
    std::string ID;
    std::string xml_lang;
    std::string source;
    std::string _contents_;

public:
    virtual std::string getXMLLabel();
    virtual void readNode(rapidxml::xml_node<> *_node);
    virtual bool readAttribute(std::string _name, std::string _value);

    std::string getID();
    std::string getLang();
    std::string getSource();
    std::string getContents();

    void setID(std::string _ID);
    void setLang(std::string _xml_lang);
    void setSource(std::string _source);
    void setContents(std::string __contents_);
};

}

#endif // DDIENTITY_H
