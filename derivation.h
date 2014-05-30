#ifndef DERIVATION_H
#define DERIVATION_H

#include "ddientity.h"
#include "drvdesc.h"

namespace DDI {

class Derivation : public DDIEntity
{
private:
    //Children
    Drvdesc *drvdesc;                       //Optional
public:
    Derivation(std::string _ID = "");
    Derivation(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // DERIVATION_H
