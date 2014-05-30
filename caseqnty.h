#ifndef CASEQNTY_H
#define CASEQNTY_H

#include "ddientity.h"

namespace DDI {

class CaseQnty : public DDIEntity
{
public:
    CaseQnty(std::string _ID = "");
    CaseQnty(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // CASEQNTY_H
