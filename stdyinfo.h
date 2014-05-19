#ifndef STDYINFO_H
#define STDYINFO_H

#include <list>

#include "ddientity.h"
#include "subject.h"
#include "abstract.h"
#include "sumdscr.h"

namespace DDICodebook {

class StdyInfo : public DDIEntity
{
private:
    //Children
    Subject *subject;
    std::list<Abstract*> abstract;
    std::list<SumDscr*> sumDscr;
public:
    StdyInfo(std::string _ID);
};

}

#endif // STDYINFO_H
