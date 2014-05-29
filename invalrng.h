#ifndef INVALRNG_H
#define INVALRNG_H

#include <vector>

#include "ddientity.h"
#include "range.h"
#include "item.h"
#include "notes.h"

namespace DDI {

class Invalrng : public DDIEntity
{
private:
    //Children
    std::vector<Range*> range;                        //Optional
    std::vector<Item*> item;                          //Optional
    std::vector<Notes*> notes;                        //Optional
public:
    Invalrng(std::string _ID = "");
    Invalrng(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
};

}

#endif // INVALRNG_H
