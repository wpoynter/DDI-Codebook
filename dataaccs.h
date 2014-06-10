#ifndef DATAACCS_H
#define DATAACCS_H

#include <vector>

#include "ddientity.h"
#include "setavail.h"
#include "usestmt.h"

namespace DDI {

class DataAccs : public DDIEntity
{
private:
    //Children
    std::vector<SetAvail*> setAvail;                  //Optional
    std::vector<UseStmt*> useStmt;                    //Optional
public:
    DataAccs(std::string _ID = "");
    DataAccs(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // DATAACCS_H
