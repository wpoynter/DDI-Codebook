#ifndef VARFORMAT_H
#define VARFORMAT_H

#include "ddientity.h"

namespace DDICodebook {

class VarFormat : public DDIEntity
{
private:
    //Attributes
    std::string type;
public:
    VarFormat(std::string _ID);
};

}

#endif // VARFORMAT_H