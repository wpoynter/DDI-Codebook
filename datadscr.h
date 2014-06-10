#ifndef DATADSCR_H
#define DATADSCR_H

#include <vector>

#include "ddientity.h"
#include "vargrp.h"
#include "var.h"

namespace DDI {

typedef std::vector<VarGrpPtr> VarGrpPtrs;
typedef std::vector<VarPtr> VarPtrs;

class DataDscr : public DDIEntity
{
private:
    //Children
    VarGrpPtrs varGrp;                          //Optional
    VarPtrs var;                                //Optional
public:
    DataDscr(std::string _ID = "");
    DataDscr(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);

    VarGrpPtrs::iterator getVarGrpBegin();
    VarGrpPtrs::iterator getVarGrpEnd();
    VarPtrs::iterator getVarBegin();
    VarPtrs::iterator getVarEnd();
};

typedef std::shared_ptr<DataDscr> DataDscrPtr;

}

#endif // DATADSCR_H
