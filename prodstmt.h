#ifndef PRODSTMT_H
#define PRODSTMT_H

#include <list>

#include "ddientity.h"
#include "producer.h"
#include "copyright.h"
#include "proddate.h"
#include "software.h"
#include "fundag.h"

namespace DDI {

class ProdStmt : public DDIEntity
{
private:
    //Attributes

    //Children
    std::list<Producer*> producer;              //Optional
    Copyright *copyright;                       //Optional
    std::list<ProdDate*> prodDate;              //Optional
    std::list<Software*> software;              //Optional
    std::list<FundAg*> fundAg;                  //Optional
public:
    ProdStmt(std::string _ID = "");
    ProdStmt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
};

}

#endif // PRODSTMT_H
