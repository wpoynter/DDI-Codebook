#ifndef CODEBOOK_H
#define CODEBOOK_H

#include <vector>
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
    std::vector<DocDscr*> docDscr;                //Optional
    std::vector<StdyDscr*> stdyDscr;              //Required
    std::vector<FileDscr*> fileDscr;              //Optional
    std::vector<DataDscr*> dataDscr;              //Optional
    std::vector<OtherMat*> otherMat;              //Optional
public:
    Codebook();
    Codebook(std::istream &is);

    static const std::string _label_;

    std::string getXMLLang();
    void readNode(rapidxml::xml_node<> *_node);

    //Test function
    void test();

    //Print functions
    void printStudies();
    void printStudy(int selection = 0);
};

}

#endif // CODEBOOK_H
