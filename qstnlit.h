#ifndef QSTNLIT_H
#define QSTNLIT_H

#include "ddientity.h"

namespace DDI {

class QstnLit : public DDIEntity
{
public:
    QstnLit(std::string _ID = "");
    QstnLit(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // QSTNLIT_H
