#ifndef TITLESTMT_H
#define TITLESTMT_H

#include <list>

#include "ddientity.h"
#include "titl.h"
#include "idno.h"

namespace DDI {

class TitleStmt : public DDIEntity
{
private:
    //Attributes

    //Children
    Titl *titl;                             //Required
    std::list<IDNo*> idno;                  //Optional
public:
    TitleStmt(std::string _ID = "");
    TitleStmt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLang();
    void readNode(rapidxml::xml_node<> *_node);

    Titl* getTitl();
};

}

#endif // TITLESTMT_H
