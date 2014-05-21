#include "reader.h"

DDI::Reader::Reader(std::string _fileName, DDI::Codebook *_codebook)
{
    prepared = false;
    fileName = _fileName;
    codebook = _codebook;
}

void DDI::Reader::newFile(std::string _fileName)
{
    prepared = false;
    fileName = _fileName;
    buf.clear();
}

void DDI::Reader::clearBuffer()
{
    buf.clear();
}

void DDI::Reader::prepare()
{
    std::cout << "Preparing...\n";
    stream.open(fileName.c_str(), std::ios::binary);
    stream.unsetf(std::ios::skipws);
    // Get stream size and resize buffer
    stream.seekg(0, std::ios::end);
    size = stream.tellg();
    stream.seekg(0);
    buf.resize(size + 1);
    prepared = true;
}

void DDI::Reader::read()
{
    if (!prepared) prepare();
    std::cout << "Reading...\n";
    // Read data and append terminating 0
    stream.read(&buf.front(), static_cast<std::streamsize>(size));
    buf[size] = 0;
}

void DDI::Reader::parse()
{
    std::cout << "Parsing...\n";
    doc.parse<0>(&buf.front());
    rapidxml::xml_node<> *n_codeBook = doc.first_node("codeBook");
    codebook->readNode(n_codeBook);
}
