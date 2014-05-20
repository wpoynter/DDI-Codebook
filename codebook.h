#ifndef CODEBOOK_H
#define CODEBOOK_H

#include <list>
#include <iostream>

#include "docdscr.h"
#include "stdydscr.h"
#include "filedscr.h"
#include "datadscr.h"
#include "othermat.h"

namespace DDI {

class Codebook
{
private:
    std::list<DocDscr*> docDscr;                //Optional
    std::list<StdyDscr*> stdyDscr;              //Required
    std::list<FileDscr*> fileDscr;              //Optional
    std::list<DataDscr*> dataDscr;              //Optional
    std::list<OtherMat*> otherMat;              //Optional
public:
    Codebook();
    Codebook(std::istream &is);
    void read(std::istream &is);
    void write(std::ostream &os);
};

}

#endif // CODEBOOK_H
