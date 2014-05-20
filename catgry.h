#ifndef CATGRY_H
#define CATGRY_H

#include <list>

#include "ddientity.h"
#include "catvalu.h"
#include "labl.h"
#include "txt.h"
#include "catstat.h"

namespace DDI {

class Catgry : public DDIEntity
{
private:
    //Children
    CatValu *catValu;                       //Optional
    std::list<Labl*> labl;                  //Optional
    std::list<Txt*> txt;                    //Optional
    std::list<CatStat*> catStat;            //Optional
public:
    Catgry(std::string _ID);
};

}

#endif // CATGRY_H
