#ifndef DOCDSCR_H
#define DOCDSCR_H

#include <vector>

#include "ddientity.h"
#include "citation.h"
#include "notes.h"

namespace DDI {

class DocDscr : public DDIEntity
{
private:
    //Children
    Citation *citation;                         //Optional
    std::vector<Notes*> notes;                    //Optional
public:
    DocDscr(std::string _ID = "");
    DocDscr(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
    Citation* getCitation();
};

typedef std::shared_ptr<DocDscr> DocDscrPtr;

}

#endif // DOCDSCR_H
