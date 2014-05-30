#ifndef FILETYPE_H
#define FILETYPE_H

#include "ddientity.h"

namespace DDI {

class FileType : public DDIEntity
{
public:
    FileType(std::string _ID = "");
    FileType(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // FILETYPE_H
