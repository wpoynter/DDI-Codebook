#ifndef TABLE_H
#define TABLE_H

#include "ddientity.h"

namespace DDI {

class Table : public DDIEntity
{
public:
    Table(std::string _ID = "");
    Table(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // TABLE_H
