#ifndef DRVDESC_H
#define DRVDESC_H

#include "ddientity.h"

namespace DDI {

class Drvdesc : public DDIEntity
{
public:
    Drvdesc(std::string _ID = "");
    Drvdesc(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // DRVDESC_H
