#ifndef READER_H
#define READER_H

#include <string>
#include <list>
#include <fstream>
#include "rapidxml-1.13/rapidxml.hpp"

#include "codebook.h"

namespace DDI {

class Reader
{
private:
    std::string fileName;
    std::list<char> buf;
    size_t size;
    DDI::Codebook *codebook;
    bool prepared;
    std::basic_ifstream<char> stream;
    rapidxml::xml_document<> doc;
public:
    Reader(std::string _fileName, DDI::Codebook *_codebook);
    void newFile(std::string _fileName);
    void clearBuffer();
    void prepare();
    void read();
    void parse();
};

}

#endif // READER_H
