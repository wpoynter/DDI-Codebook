#ifndef CITATION_H
#define CITATION_H

#include <list>

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
    //Attributes
    std::string xml_lang;
    std::string source;

    //Children
    TitleStmt *titleStmt;               //Required
    ProdStmt *prodStmt;                 //Optional
    std::list<VerStmt*> verStmt;        //Optional
    RspStmt *rspStmt;                   //Optional
    DistStmt *distStmt;                 //Optional
    SerStmt *serStmt;                   //Optional
    BiblCit *biblCit;                   //Optional
public:
    Citation(std::string _ID = "");
    Citation(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLang();
    void readNode(rapidxml::xml_node<> *_node);

    TitleStmt* getTitlStmt();
};

}

#endif // CITATION_H
