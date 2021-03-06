#ifndef METHOD_H
#define METHOD_H

#include <vector>

#include "ddientity.h"
#include "datacoll.h"
#include "notes.h"

namespace DDI {

class Method : public DDIEntity
{
private:
    //Children
    std::vector<DataColl*> dataColl;                      //Optional
    std::vector<Notes*> notes;                            //Optional
public:
    Method(std::string _ID = "");
    Method(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
};

}

#endif // METHOD_H
