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

typedef std::vector<DocDscrPtr> DocDscrPtrs;
typedef std::vector<StdyDscrPtr> StdyDscrPtrs;
typedef std::vector<FileDscrPtr> FileDscrPtrs;
typedef std::vector<DataDscrPtr> DataDscrPtrs;
typedef std::vector<OtherMatPtr> OtherMatPtrs;

class Codebook : public DDIEntity
{
private:
    //Children
    DocDscrPtrs docDscr;                //Optional
    StdyDscrPtrs stdyDscr;              //Required
    FileDscrPtrs fileDscr;              //Optional
    DataDscrPtrs dataDscr;              //Optional
    OtherMatPtrs otherMat;              //Optional
public:
    Codebook();
    Codebook(std::istream &is);

    static const std::string _label_;

    std::string getXMLLang();
    void readNode(rapidxml::xml_node<> *_node);

    void linkIDs();

    //Test function
    void test();

    //Print functions
    void printStudies();
    void printStudy(int selection = 0);
    void printVariableTree();
};

}

#endif // CODEBOOK_H
