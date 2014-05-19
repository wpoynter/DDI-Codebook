#ifndef STDYDSCR_H
#define STDYDSCR_H

#include <list>

#include "ddientity.h"
#include "citation.h"
#include "stdyinfo.h"
#include "method.h"
#include "dataaccs.h"
#include "notes.h"

namespace DDICodebook {

class StdyDscr : public DDIEntity
{
private:
    //Children
    std::list<Citation*> citation;                      //Required
    std::list<StdyInfo*> stdyInfo;                      //Optional
    std::list<Method*> method;                          //Optional
    std::list<DataAccs*> dataAccs;                      //Optional
    std::list<Notes*> notes;                            //Optional
public:
    StdyDscr(std::string _ID);
};

}

#endif // STDYDSCR_H
