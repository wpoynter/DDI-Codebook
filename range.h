#ifndef RANGE_H
#define RANGE_H

#include "ddientity.h"

namespace DDI {

class Range : public DDIEntity
{
private:
    //Attributes
    std::string UNITS;
    std::string min;
    std::string max;
public:
    Range(std::string _ID = "");
    Range(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // RANGE_H
