#ifndef FILEDSCR_H
#define FILEDSCR_H

#include <list>

#include "ddientity.h"
#include "filetxt.h"
#include "notes.h"

namespace DDI {

class FileDscr : public DDIEntity
{
private:
    //Children
    std::list<FileTxt*> fileTxt;                            //Optional
    std::list<Notes*> notes;                                //Optional
public:
    FileDscr(std::string _ID);
};

}

#endif // FILEDSCR_H
