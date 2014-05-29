#ifndef LABL_H
#define LABL_H

#include "ddientity.h"

namespace DDI {

class Labl : public DDIEntity
{
public:
    Labl(std::string _ID = "");
    Labl(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // LABL_H
