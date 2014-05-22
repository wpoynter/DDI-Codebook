#ifndef NOTES_H
#define NOTES_H

#include "ddientity.h"

namespace DDI {

class Notes : public DDIEntity
{
public:
    Notes(std::string _ID = "");
    Notes(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // NOTES_H
