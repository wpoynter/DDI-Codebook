#ifndef TXT_H
#define TXT_H

#include "ddientity.h"

namespace DDI {

class Txt : public DDIEntity
{
public:
    Txt(std::string _ID = "");
    Txt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // TXT_H
