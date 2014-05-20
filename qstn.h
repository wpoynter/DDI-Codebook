#ifndef QSTN_H
#define QSTN_H

#include <list>

#include "ddientity.h"
#include "qstnlit.h"

namespace DDI {

class Qstn : public DDIEntity
{
private:
    std::list<QstnLit*> qstnLit;                        //Optional
public:
    Qstn(std::string _ID);
};

}

#endif // QSTN_H
