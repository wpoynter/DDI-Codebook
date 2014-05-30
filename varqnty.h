#ifndef VARQNTY_H
#define VARQNTY_H

#include "ddientity.h"

namespace DDI {

class VarQnty : public DDIEntity
{
public:
    VarQnty(std::string _ID = "");
    VarQnty(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // VARQNTY_H
