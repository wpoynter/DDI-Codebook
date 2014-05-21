#ifndef DISTSTMT_H
#define DISTSTMT_H

#include <list>

#include "ddientity.h"
#include "distrbtr.h"
#include "distdate.h"

namespace DDI {

class DistStmt : public DDIEntity
{
private:
    //Children
    std::list<Distrbtr*> distrbtr;                  //Optional
    DistDate *distDate;                             //Optional
public:
    DistStmt(std::string _ID = "");
    DistStmt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLang();
};

}

#endif // DISTSTMT_H
