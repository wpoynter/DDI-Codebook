#ifndef FILETXT_H
#define FILETXT_H

#include "ddientity.h"
#include "filename.h"
#include "dimensns.h"
#include "filetype.h"

namespace DDI {

class FileTxt : public DDIEntity
{
private:
    //Children
    FileName *fileName;                             //Optional
    Dimensns *dimensns;                             //Optional
    FileType *fileType;                             //Optional
public:
    FileTxt(std::string _ID = "");
    FileTxt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
};

}

#endif // FILETXT_H
