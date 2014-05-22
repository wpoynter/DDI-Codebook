#ifndef SOFTWARE_H
#define SOFTWARE_H

#include "ddientity.h"
#include "date.h"

namespace DDI {

class Software : public DDIEntity
{
private:
    //Attributes
    DDI::Date date;
    std::string version;
public:
    Software(std::string _ID);
    Software(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // SOFTWARE_H
