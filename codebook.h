#ifndef CODEBOOK_H
#define CODEBOOK_H

#include <list>

#include "docdscr.h"
#include "stdydscr.h"
#include "filedscr.h"

namespace DDICodebook {

class Codebook
{
private:
    std::list<DocDscr*> docDscr;                //Optional
    std::list<StdyDscr*> stdyDscr;              //Required
    std::list<FileDscr*> fileDscr;              //Optional
public:
    Codebook();
};

}

#endif // CODEBOOK_H
