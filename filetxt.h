#ifndef FILETXT_H
#define FILETXT_H

#include "ddientity.h"
#include "filename.h"
#include "dimensns.h"
#include "filetype.h"

namespace DDICodebook {

class FileTxt : public DDIEntity
{
private:
    //Children
    FileName *fileName;                             //Optional
    Dimensns *dimensns;                             //Optional
    FileType *fileType;                             //Optional
public:
    FileTxt(std::string _ID);
};

}

#endif // FILETXT_H
