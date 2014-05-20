#ifndef ITEM_H
#define ITEM_H

#include "ddientity.h"

namespace DDI {

class Item : public DDIEntity
{
private:
    //Attributes
    std::string UNITS;
    std::string VALUE;
public:
    Item(std::string _ID);
};

}

#endif // ITEM_H
