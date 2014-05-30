#ifndef RECPRCAS_H
#define RECPRCAS_H

#include "ddientity.h"

namespace DDI {

class RecPrCas : public DDIEntity
{
public:
    RecPrCas(std::string _ID = "");
    RecPrCas(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // RECPRCAS_H
