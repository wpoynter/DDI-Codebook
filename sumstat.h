#ifndef SUMSTAT_H
#define SUMSTAT_H

#include "ddientity.h"

namespace DDI {

class SumStat : public DDIEntity
{
public:
    SumStat(std::string _ID = "");
    SumStat(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // SUMSTAT_H
