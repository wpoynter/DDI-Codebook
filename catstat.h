#ifndef CATSTAT_H
#define CATSTAT_H

#include "ddientity.h"

namespace DDI {

class CatStat : public DDIEntity
{
public:
    CatStat(std::string _ID = "");
    CatStat(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // CATSTAT_H
