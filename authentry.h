#ifndef AUTHENTRY_H
#define AUTHENTRY_H

#include "ddientity.h"

namespace DDI {

class AuthEntry : public DDIEntity
{
private:
    //Attributes
    std::string affiliation;
public:
    AuthEntry(std::string _ID);
    AuthEntry(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // AUTHENTRY_H
