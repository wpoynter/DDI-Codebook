#ifndef DERIVATION_H
#define DERIVATION_H

#include "ddientity.h"
#include "drvdesc.h"

namespace DDI {

class Derivation : public DDIEntity
{
private:
    //Children
    Drvdesc *drvdesc;                       //Optional
public:
    Derivation(std::string _ID);
};

}

#endif // DERIVATION_H
