#ifndef VERSTMT_H
#define VERSTMT_H

#include <list>

#include "ddientity.h"
#include "version.h"
#include "notes.h"

namespace DDICodebook {

class VerStmt : public DDIEntity
{
private:
    //Children
    Version *version;
    std::list<Notes*> notes;
public:
    VerStmt(std::string _ID);
};

}

#endif // VERSTMT_H
