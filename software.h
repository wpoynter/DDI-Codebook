#ifndef SOFTWARE_H
#define SOFTWARE_H

#include <ctime>

#include "ddientity.h"

namespace DDI {

class Software : public DDIEntity
{
private:
    //Attributes
    time_t date;
    std::string version;
public:
    Software(std::string _ID);
};

}

#endif // SOFTWARE_H
