#ifndef STDYINFO_H
#define STDYINFO_H

#include <list>

#include "ddientity.h"
#include "subject.h"
#include "abstract.h"
#include "sumdscr.h"
#include "notes.h"

namespace DDI {

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
    StdyInfo(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // STDYINFO_H
