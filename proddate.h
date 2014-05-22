#ifndef PRODDATE_H
#define PRODDATE_H

#include "ddientity.h"
#include "date.h"

namespace DDI {

class ProdDate : public DDIEntity
{
private:
    //Attributes
    DDI::Date date;
public:
    ProdDate(std::string _ID = "");
    ProdDate(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // PRODDATE_H
