#ifndef QSTN_H
#define QSTN_H

#include <vector>

#include "ddientity.h"
#include "qstnlit.h"

namespace DDI {

class Qstn : public DDIEntity
{
private:
    std::vector<QstnLit*> qstnLit;                        //Optional
public:
    Qstn(std::string _ID = "");
    Qstn(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
};

}

#endif // QSTN_H
