#ifndef VARFORMAT_H
#define VARFORMAT_H

#include "ddientity.h"

namespace DDI {

class VarFormat : public DDIEntity
{
private:
    //Attributes
    std::string type;
public:
    VarFormat(std::string _ID = "");
    VarFormat(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // VARFORMAT_H
