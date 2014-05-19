#ifndef SERSTMT_H
#define SERSTMT_H

#include "ddientity.h"
#include "sername.h"

namespace DDICodebook {

class SerStmt : public DDIEntity
{
private:
    SerName *serName;
public:
    SerStmt(std::string _ID);
};

}

#endif // SERSTMT_H
