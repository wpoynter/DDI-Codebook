#ifndef USESTMT_H
#define USESTMT_H

#include "ddientity.h"
#include "restrctn.h"

namespace DDICodebook {

class UseStmt : public DDIEntity
{
private:
    //Children
    Restrctn *restrctn;                             //Optional
public:
    UseStmt(std::string _ID);
};

}

#endif // USESTMT_H
