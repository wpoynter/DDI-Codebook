#ifndef LOCATION_H
#define LOCATION_H

#include "ddientity.h"

namespace DDI {

class Location : public DDIEntity
{
private:
    //Attributes
    std::string StartPos;
    std::string EndPos;
    std::string width;
public:
    Location(std::string _ID = "");
    Location(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // LOCATION_H
