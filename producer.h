#ifndef PRODUCER_H
#define PRODUCER_H

#include "ddientity.h"

namespace DDI {

class Producer : public DDIEntity
{
public:
    Producer(std::string _ID);
    Producer(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // PRODUCER_H
