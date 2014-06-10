#ifndef ABSTRACT_H
#define ABSTRACT_H

#include "ddientity.h"

namespace DDI {

class Abstract : public DDIEntity
{
public:
    Abstract(std::string _ID = "");
};

}

#endif // ABSTRACT_H
