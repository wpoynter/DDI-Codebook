#ifndef STDYDSCR_H
#define STDYDSCR_H

#include <vector>

#include "ddientity.h"
#include "citation.h"
#include "stdyinfo.h"
#include "method.h"
#include "dataaccs.h"
#include "notes.h"

namespace DDI {

class StdyDscr : public DDIEntity
{
private:
    //Children
    std::vector<Citation*> citation;                      //Required
    std::vector<StdyInfo*> stdyInfo;                      //Optional
    std::vector<Method*> method;                          //Optional
    std::vector<DataAccs*> dataAccs;                      //Optional
    std::vector<Notes*> notes;                            //Optional
public:
    StdyDscr(std::string _ID = "");
    StdyDscr(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);

    std::vector<Citation*>::iterator getCitationBegin();
    std::vector<Citation*>::iterator getCitationEnd();
};

typedef std::shared_ptr<StdyDscr> StdyDscrPtr;

}

#endif // STDYDSCR_H
