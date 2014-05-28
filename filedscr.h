#ifndef FILEDSCR_H
#define FILEDSCR_H

#include <vector>

#include "ddientity.h"
#include "filetxt.h"
#include "notes.h"

namespace DDI {

class FileDscr : public DDIEntity
{
private:
    //Children
    std::vector<FileTxt*> fileTxt;                            //Optional
    std::vector<Notes*> notes;                                //Optional
public:
    FileDscr(std::string _ID);
};

}

#endif // FILEDSCR_H
