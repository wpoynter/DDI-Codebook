#ifndef DISTDATE_H
#define DISTDATE_H

#include <ctime>

#include "ddientity.h"

namespace DDICodebook {

class DistDate : public DDIEntity
{
private:
    time_t date;
public:
    DistDate(std::string _ID);
};

}

#endif // DISTDATE_H
