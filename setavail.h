#ifndef SETAVAIL_H
#define SETAVAIL_H

#include "ddientity.h"
#include "collsize.h"
#include "fileqnty.h"

namespace DDICodebook {

class SetAvail : public DDIEntity
{
private:
    //Children
    CollSize *collSize;                             //Optional
    FileQnty *fileQnty;                             //Optional
public:
    SetAvail(std::string _ID);
};

}

#endif // SETAVAIL_H
