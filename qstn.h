#ifndef QSTN_H
#define QSTN_H

#include <vector>

#include "ddientity.h"
#include "qstnlit.h"

namespace DDI {

class Qstn : public DDIEntity
{
private:
    std::vector<QstnLit*> qstnLit;                        //Optional
public:
    Qstn(std::string _ID);
};

}

#endif // QSTN_H
