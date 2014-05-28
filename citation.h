#ifndef CITATION_H
#define CITATION_H

#include <vector>

#include "ddientity.h"
#include "titlestmt.h"
#include "prodstmt.h"
#include "verstmt.h"
#include "rspstmt.h"
#include "diststmt.h"
#include "serstmt.h"
#include "biblcit.h"

namespace DDI {

class Citation : public DDIEntity
{
private:
    //Children
    TitleStmt *titleStmt;               //Required
    ProdStmt *prodStmt;                 //Optional
    std::vector<VerStmt*> verStmt;        //Optional
    RspStmt *rspStmt;                   //Optional
    DistStmt *distStmt;                 //Optional
    SerStmt *serStmt;                   //Optional
    BiblCit *biblCit;                   //Optional
public:
    Citation(std::string _ID = "");
    Citation(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);

    TitleStmt* getTitlStmt();

    //Print functions
    void printTitlStmt();
    void printTitl();
    void printIDNo();
    void printIDNo(int selection = 0);
    void printRspStmt();
};

}

#endif // CITATION_H
