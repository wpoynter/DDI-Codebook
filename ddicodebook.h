#ifndef CODEBOOK_H
#define CODEBOOK_H

#include <list>

#include "docdscr.h"
#include "stdydscr.h"

namespace DDICodebook {

class Codebook
{
private:
    std::list<DocDscr*> docDscr;                //Optional
    std::list<StdyDscr*> stdyDscr;              //Required
public:
    Codebook();
};

}

#endif // CODEBOOK_H
