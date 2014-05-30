#ifndef DISTDATE_H
#define DISTDATE_H

#include "ddientity.h"
#include "date.h"

namespace DDI {

class DistDate : public DDIEntity
{
private:
    DDI::Date date;
public:
    DistDate(std::string _ID = "");
    DistDate(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // DISTDATE_H
