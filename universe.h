#ifndef UNIVERSE_H
#define UNIVERSE_H

#include "ddientity.h"

namespace DDI {

class Universe : public DDIEntity
{
public:
    Universe(std::string _ID = "");
    Universe(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // UNIVERSE_H
