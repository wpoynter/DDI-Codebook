#ifndef ITEM_H
#define ITEM_H

#include "ddientity.h"

namespace DDI {

class Item : public DDIEntity
{
private:
    //Attributes
    std::string UNITS;
    std::string VALUE;
public:
    Item(std::string _ID = "");
    Item(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // ITEM_H
