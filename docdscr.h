#ifndef DOCDSCR_H
#define DOCDSCR_H

#include <list>

#include "ddientity.h"
#include "citation.h"
#include "notes.h"

namespace DDI {

class DocDscr : public DDIEntity
{
private:
    //Attributes

    //Children
    Citation *citation;                         //Optional
    std::list<Notes*> notes;                    //Optional
public:
    DocDscr(std::string _ID = "");
    DocDscr(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
    Citation* getCitation();
};

}

#endif // DOCDSCR_H
