#ifndef IDNO_H
#define IDNO_H

#include "ddientity.h"

namespace DDI {

class IDNo : public DDIEntity
{
public:
    IDNo(std::string _ID = "");
    IDNo(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // IDNO_H
