#ifndef DIMENSNS_H
#define DIMENSNS_H

#include <vector>

#include "ddientity.h"
#include "caseqnty.h"
#include "varqnty.h"
#include "logrecl.h"
#include "recprcas.h"

namespace DDI {

class Dimensns : public DDIEntity
{
private:
    //Children
    std::vector<CaseQnty*> caseQnty;                      //Optional
    std::vector<VarQnty*> varQnty;                        //Optional
    std::vector<LogRecl*> logRecl;                        //Optional
    std::vector<RecPrCas*> recPrCas;                      //Optional
public:
    Dimensns(std::string _ID = "");
    Dimensns(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
};

}

#endif // DIMENSNS_H
