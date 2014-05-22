#ifndef VERSION_H
#define VERSION_H

#include "ddientity.h"
#include "date.h"

namespace DDI {

class Version : public DDIEntity
{
private:
    //Attributes
    DDI::Date date;
public:
    Version(std::string _ID = "");
    Version(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // VERSION_H
