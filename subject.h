#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>

#include "ddientity.h"
#include "keyword.h"

namespace DDICodebook {

class Subject : public DDIEntity
{
private:
    std::list<Keyword*> keyword;
public:
    Subject(std::string _ID);
};

}

#endif // SUBJECT_H
