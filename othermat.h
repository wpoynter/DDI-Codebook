#ifndef OTHERMAT_H
#define OTHERMAT_H

#include <list>

#include "ddientity.h"
#include "labl.h"
#include "txt.h"
#include "notes.h"
#include "table.h"
#include "citation.h"

namespace DDICodebook {

class OtherMat : public DDIEntity
{
private:
    //Attributes
    std::string URI;
    //Children
    std::list<Labl*> labl;                          //Optional
    Txt *txt;                                       //Optional
    std::list<Notes*> notes;                        //Optional
    std::list<Table*> table;                        //Optional
    Citation *citation;                             //Optional
public:
    OtherMat(std::string _ID);
};

}

#endif // OTHERMAT_H
