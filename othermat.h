#ifndef OTHERMAT_H
#define OTHERMAT_H

#include <vector>
#include <memory>

#include "ddientity.h"
#include "labl.h"
#include "txt.h"
#include "notes.h"
#include "table.h"
#include "citation.h"

namespace DDI {

class OtherMat : public DDIEntity
{
private:
    //Attributes
    std::string URI;
    //Children
    std::vector<Labl*> labl;                          //Optional
    Txt *txt;                                       //Optional
    std::vector<Notes*> notes;                        //Optional
    std::vector<Table*> table;                        //Optional
    Citation *citation;                             //Optional
public:
    OtherMat(std::string _ID = "");
    OtherMat(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
    bool readAttribute(std::string _name, std::string _value);
};

typedef std::shared_ptr<OtherMat> OtherMatPtr;

}

#endif // OTHERMAT_H
