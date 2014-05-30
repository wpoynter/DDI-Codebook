#ifndef CONCEPT_H
#define CONCEPT_H

#include "ddientity.h"

namespace DDI {

class Concept : public DDIEntity
{
public:
    Concept(std::string _ID = "");
    Concept(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // CONCEPT_H
