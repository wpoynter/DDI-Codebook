#ifndef RSPSTMT_H
#define RSPSTMT_H

#include <vector>

#include "ddientity.h"
#include "authentry.h"
#include "othid.h"

namespace DDI {

class RspStmt : public DDIEntity
{
private:
    //Children
    std::vector<AuthEntry*> authEntry;
    std::vector<OthId*> othId;
public:
    RspStmt(std::string _ID = "");
    RspStmt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);

    void printAuthEnty();
    void printAuthEnty(int selection);
    void printOthId();
    void printOthId(int selection);
};

}

#endif // RSPSTMT_H
