#ifndef AUTHENTRY_H
#define AUTHENTRY_H

#include "ddientity.h"

namespace DDICodebook {

class AuthEntry : public DDIEntity
{
private:
    std::string affiliation;
public:
    AuthEntry(std::string _ID);
};

}

#endif // AUTHENTRY_H
