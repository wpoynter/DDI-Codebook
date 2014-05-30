#ifndef FILENAME_H
#define FILENAME_H

#include "ddientity.h"

namespace DDI {

class FileName : public DDIEntity
{
public:
    FileName(std::string _ID = "");
    FileName(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // FILENAME_H
