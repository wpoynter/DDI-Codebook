#ifndef INVALRNG_H
#define INVALRNG_H

#include <list>

#include "ddientity.h"
#include "range.h"
#include "item.h"
#include "notes.h"

namespace DDICodebook {

class Invalrng : public DDIEntity
{
private:
    //Children
    std::list<Range*> range;                        //Optional
    std::list<Item*> item;                          //Optional
    std::list<Notes*> notes;                        //Optional
public:
    Invalrng(std::string _ID);
};

}

#endif // INVALRNG_H
