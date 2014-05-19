#ifndef STDYINFO_H
#define STDYINFO_H

#include <list>

#include "ddientity.h"
#include "subject.h"
#include "abstract.h"
#include "sumdscr.h"
#include "notes.h"

namespace DDICodebook {

class StdyInfo : public DDIEntity
{
private:
    //Children
    Subject *subject;                               //Optional
    std::list<Abstract*> abstract;                  //Optional
    std::list<SumDscr*> sumDscr;                    //Optional
    std::list<Notes*> notes;                        //Optional
public:
    StdyInfo(std::string _ID);
};

}

#endif // STDYINFO_H
