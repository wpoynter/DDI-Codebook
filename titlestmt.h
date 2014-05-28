#ifndef TITLESTMT_H
#define TITLESTMT_H

#include <vector>

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
    std::vector<IDNo*> idno;                  //Optional
public:
    TitleStmt(std::string _ID = "");
    TitleStmt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);

    Titl* getTitl();
    std::vector<IDNo*>::iterator getIDNoBegin();
    std::vector<IDNo*>::iterator getIDNoEnd();

    //Print functions
    void printTitl();
    void printIDNo();
    void printIDNo(int selection);
};

}

#endif // TITLESTMT_H
