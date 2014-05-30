#ifndef SERNAME_H
#define SERNAME_H

#include "ddientity.h"

namespace DDI {

class SerName : public DDIEntity
{
public:
    SerName(std::string _ID = "");
    SerName(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // SERNAME_H
