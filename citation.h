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

namespace DDICodebook {

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
    Citation(std::string _ID);
};

}

#endif // CITATION_H
