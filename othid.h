#ifndef OTHID_H
#define OTHID_H

#include "ddientity.h"

namespace DDI {

class OthId : public DDIEntity
{
public:
    OthId(std::string _ID = "");
    OthId(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // OTHID_H
