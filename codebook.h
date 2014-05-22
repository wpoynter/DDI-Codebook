#ifndef CODEBOOK_H
#define CODEBOOK_H

#include <list>
#include <iostream>

#include "docdscr.h"
#include "stdydscr.h"
#include "filedscr.h"
#include "datadscr.h"
#include "othermat.h"

namespace DDI {

class Codebook : public DDIEntity
{
private:
    //Children
    std::list<DocDscr*> docDscr;                //Optional
    std::list<StdyDscr*> stdyDscr;              //Required
    std::list<FileDscr*> fileDscr;              //Optional
    std::list<DataDscr*> dataDscr;              //Optional
    std::list<OtherMat*> otherMat;              //Optional
public:
    Codebook();
    Codebook(std::istream &is);

    static const std::string _label_;

    std::string getXMLLang();
    void readNode(rapidxml::xml_node<> *_node);

    //Test function
    void test();
};

}

#endif // CODEBOOK_H
