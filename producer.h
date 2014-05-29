#ifndef PRODUCER_H
#define PRODUCER_H

#include "ddientity.h"

namespace DDI {

class Producer : public DDIEntity
{
private:
    //Attributes
    std::string abbr;
    std::string affiliation;
public:
    Producer(std::string _ID);
    Producer(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // PRODUCER_H
