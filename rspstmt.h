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
    //Children
    std::list<AuthEntry*> authEntry;
    std::list<OthId*> othId;
public:
    RspStmt(std::string _ID = "");
    RspStmt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLang();
};

}

#endif // RSPSTMT_H
