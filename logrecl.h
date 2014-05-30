#ifndef LOGRECL_H
#define LOGRECL_H

#include "ddientity.h"

namespace DDI {

class LogRecl : public DDIEntity
{
public:
    LogRecl(std::string _ID = "");
    LogRecl(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // LOGRECL_H
