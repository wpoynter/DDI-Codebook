#ifndef TITL_H
#define TITL_H

#include "ddientity.h"

namespace DDI {

class Titl : public DDIEntity
{
public:
    Titl(std::string _ID = "");
    Titl(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // TITL_H
