#ifndef CATVALU_H
#define CATVALU_H

#include "ddientity.h"

namespace DDI {

class CatValu : public DDIEntity
{
public:
    CatValu(std::string _ID = "");
    CatValu(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // CATVALU_H
