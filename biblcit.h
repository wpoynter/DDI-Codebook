#ifndef BIBLCIT_H
#define BIBLCIT_H

#include "ddientity.h"

namespace DDI {

class BiblCit : public DDIEntity
{
public:
    BiblCit(std::string _ID = "");
    BiblCit(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLang();
};

}

#endif // BIBLCIT_H
