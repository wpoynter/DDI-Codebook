#ifndef DISTRBTR_H
#define DISTRBTR_H

#include "ddientity.h"

namespace DDI {

class Distrbtr : public DDIEntity
{
public:
    Distrbtr(std::string _ID = "");
    Distrbtr(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // DISTRBTR_H
