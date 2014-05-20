#ifndef LOCATION_H
#define LOCATION_H

#include "ddientity.h"

namespace DDICodebook {

class Location : public DDIEntity
{
private:
    //Attributes
    std::string StartPos;
    std::string EndPos;
    std::string width;
public:
    Location(std::string _ID);
};

}

#endif // LOCATION_H
