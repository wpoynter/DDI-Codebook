#ifndef VAR_H
#define VAR_H

#include <list>

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
    std::list<Location*> location;                      //Optional
    std::list<Labl*> labl;                              //Optional
    std::list<Qstn*> qstn;                              //Optional
    std::list<Invalrng*> invalrng;                      //Optional
    std::list<Universe*> universe;                      //Optional
    std::list<SumStat*> sumStat;                        //Optional
    std::list<Txt*> txt;                                //Optional
    std::list<CatgryGrp*> catgryGrp;                    //Optional
    std::list<Catgry*> catgry;                          //Optional
    std::list<Concept*> concept;                        //Optional
    Derivation *derivation;                             //Optional
    VarFormat *varFormat;                               //Optional
    std::list<Notes*> notes;                            //Optional
public:
    Var(std::string _ID);
};

}

#endif // VAR_H
