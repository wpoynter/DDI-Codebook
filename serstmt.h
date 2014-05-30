#ifndef SERSTMT_H
#define SERSTMT_H

#include <vector>

#include "ddientity.h"
#include "sername.h"

namespace DDI {

class SerStmt : public DDIEntity
{
private:
    std::vector<SerName*> serName;
public:
    SerStmt(std::string _ID = "");
    SerStmt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
};

}

#endif // SERSTMT_H
