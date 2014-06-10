#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>

#include "ddientity.h"
#include "keyword.h"

namespace DDI {

class Subject : public DDIEntity
{
private:
    std::vector<Keyword*> keyword;
public:
    Subject(std::string _ID = "");
};

}

#endif // SUBJECT_H
