#ifndef DIMENSNS_H
#define DIMENSNS_H

#include <list>

#include "ddientity.h"
#include "caseqnty.h"
#include "varqnty.h"
#include "logrecl.h"
#include "recprcas.h"

namespace DDI {

class Dimensns : public DDIEntity
{
private:
    //Children
    std::list<CaseQnty*> caseQnty;                      //Optional
    std::list<VarQnty*> varQnty;                        //Optional
    std::list<LogRecl*> logRecl;                        //Optional
    std::list<RecPrCas*> recPrCas;                      //Optional
public:
    Dimensns(std::string _ID);
};

}

#endif // DIMENSNS_H
