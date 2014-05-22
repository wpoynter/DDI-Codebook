#ifndef VERSTMT_H
#define VERSTMT_H

#include <list>

#include "ddientity.h"
#include "version.h"
#include "notes.h"

namespace DDI {

class VerStmt : public DDIEntity
{
private:
    //Children
    Version *version;
    std::list<Notes*> notes;
public:
    VerStmt(std::string _ID = "");
    VerStmt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
};

}

#endif // VERSTMT_H
