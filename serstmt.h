#ifndef SERSTMT_H
#define SERSTMT_H

#include "ddientity.h"
#include "sername.h"

namespace DDI {

class SerStmt : public DDIEntity
{
private:
    SerName *serName;
public:
    SerStmt(std::string _ID = "");
    SerStmt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLang();
};

}

#endif // SERSTMT_H
