#ifndef PRODDATE_H
#define PRODDATE_H

#include <ctime>

#include "ddientity.h"

namespace DDICodebook {

class ProdDate : public DDIEntity
{
private:
    //Attributes
    time_t date;
public:
    ProdDate(std::string _ID);
};

}

#endif // PRODDATE_H
