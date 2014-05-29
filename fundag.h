#ifndef FUNDAG_H
#define FUNDAG_H

#include "ddientity.h"

namespace DDI {

class FundAg : public DDIEntity
{
public:
    FundAg(std::string _ID = "");
    FundAg(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // FUNDAG_H
