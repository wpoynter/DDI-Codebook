#ifndef INVALRNG_H
#define INVALRNG_H

#include <vector>

#include "ddientity.h"
#include "range.h"
#include "item.h"
#include "notes.h"

namespace DDI {

class Invalrng : public DDIEntity
{
private:
    //Children
    std::vector<Range*> range;                        //Optional
    std::vector<Item*> item;                          //Optional
    std::vector<Notes*> notes;                        //Optional
public:
    Invalrng(std::string _ID);
};

}

#endif // INVALRNG_H
