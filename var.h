#ifndef VAR_H
#define VAR_H

#include <vector>

#include "ddientity.h"
#include "location.h"
#include "labl.h"
#include "qstn.h"
#include "invalrng.h"
#include "universe.h"
#include "sumstat.h"
#include "txt.h"
#include "catgrygrp.h"
#include "catgry.h"
#include "concept.h"
#include "derivation.h"
#include "varformat.h"
#include "notes.h"

namespace DDI {

class Var : public DDIEntity
{
private:
    //Attributes
    std::string name;
    std::string files;
    std::string dcml;
    std::string intrvl;
    //Children
    std::vector<Location*> location;                      //Optional
    std::vector<Labl*> labl;                              //Optional
    std::vector<Qstn*> qstn;                              //Optional
    std::vector<Invalrng*> invalrng;                      //Optional
    std::vector<Universe*> universe;                      //Optional
    std::vector<SumStat*> sumStat;                        //Optional
    std::vector<Txt*> txt;                                //Optional
    std::vector<CatgryGrp*> catgryGrp;                    //Optional
    std::vector<Catgry*> catgry;                          //Optional
    std::vector<Concept*> concept;                        //Optional
    Derivation *derivation;                             //Optional
    VarFormat *varFormat;                               //Optional
    std::vector<Notes*> notes;                            //Optional
public:
    Var(std::string _ID = "");
    Var(rapidxml::xml_node<> *_node);

    static const std::string _label_;

    std::string getXMLLabel();
    void readNode(rapidxml::xml_node<> *_node);
    bool readAttribute(std::string _name, std::string _value);
};

}

#endif // VAR_H
