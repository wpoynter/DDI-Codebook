#ifndef VERSION_H
#define VERSION_H

#include <ctime>

#include "ddientity.h"

namespace DDICodebook {

class Version : public DDIEntity
{
private:
    //Attributes
    time_t date;
public:
    Version(std::string _ID);
};

}

#endif // VERSION_H
