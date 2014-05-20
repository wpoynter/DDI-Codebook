#ifndef RSPSTMT_H
#define RSPSTMT_H

#include <list>

#include "ddientity.h"
#include "authentry.h"
#include "othid.h"

namespace DDI {

class RspStmt : public DDIEntity
{
private:
    std::list<AuthEntry*> authEntry;
    std::list<OthId*> othId;
public:
    RspStmt(std::string _ID);
};

}

#endif // RSPSTMT_H
