#ifndef COPYRIGHT_H
#define COPYRIGHT_H

#include "ddientity.h"

namespace DDI {

class Copyright : public DDIEntity
{
public:
    Copyright(std::string _ID = "");
    Copyright(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // COPYRIGHT_H
