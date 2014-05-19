#ifndef DOCDSCR_H
#define DOCDSCR_H

#include <list>

#include "ddientity.h"
#include "citation.h"
#include "notes.h"

namespace DDICodebook {

class DocDscr : public DDIEntity
{
private:
    //Attributes

    //Children
    Citation *citation;                         //Optional
    std::list<Notes*> notes;                    //Optional
public:
    DocDscr(std::string _ID);
};

}

#endif // DOCDSCR_H
