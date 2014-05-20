#ifndef DDIENTITY_H
#define DDIENTITY_H

#include <string>

namespace DDI {

class DDIEntity
{
protected:
    std::string ID;
    std::string xml_lang;
    std::string source;
    std::string _contents_;
};

}

#endif // DDIENTITY_H
