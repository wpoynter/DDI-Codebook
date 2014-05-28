#ifndef CATGRY_H
#define CATGRY_H

#include <vector>

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
    std::vector<Labl*> labl;                  //Optional
    std::vector<Txt*> txt;                    //Optional
    std::vector<CatStat*> catStat;            //Optional
public:
    Catgry(std::string _ID);
};

}

#endif // CATGRY_H
