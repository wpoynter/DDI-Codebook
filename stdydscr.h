#ifndef STDYDSCR_H
#define STDYDSCR_H

#include <list>

#include "ddientity.h"
#include "citation.h"
#include "stdyinfo.h"

namespace DDICodebook {

class StdyDscr : public DDIEntity
{
private:
    std::list<Citation*> citation;                      //Required
    std::list<StdyInfo*> stdyInfo;                      //Optional
public:
    StdyDscr(std::string _ID);
};

}

#endif // STDYDSCR_H
