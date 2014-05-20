#ifndef TITLESTMT_H
#define TITLESTMT_H

#include <list>

#include "ddientity.h"
#include "titl.h"
#include "idno.h"

namespace DDI {

class TitleStmt : public DDIEntity
{
private:
    //Attributes

    //Children
    Titl *titl;                             //Required
    std::list<IDNo*> idno;                  //Optional
public:
    TitleStmt(std::string _ID);
};

}

#endif // TITLESTMT_H
