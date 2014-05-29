#ifndef PRODSTMT_H
#define PRODSTMT_H

#include <vector>

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
    std::vector<Producer*> producer;              //Optional
    Copyright *copyright;                       //Optional
    std::vector<ProdDate*> prodDate;              //Optional
    std::vector<Software*> software;              //Optional
    std::vector<FundAg*> fundAg;                  //Optional
public:
    ProdStmt(std::string _ID = "");
    ProdStmt(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);

    //Print Functions
    void printProducer();
    void printProducer(int selection);
    void printCopyright();
    void printProdDate();
    void printProdDate(int selection);
    void printSoftware();
    void printSoftware(int selection);
    void printFundAg();
    void printFundAg(int selection);
};

}

#endif // PRODSTMT_H
