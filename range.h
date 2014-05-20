#ifndef RANGE_H
#define RANGE_H

#include "ddientity.h"

namespace DDICodebook {

class Range : public DDIEntity
{
private:
    //Attributes
    std::string UNITS;
    std::string min;
    std::string max;
public:
    Range(std::string _ID);
};

}

#endif // RANGE_H
