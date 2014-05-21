#ifndef NOTES_H
#define NOTES_H

#include "ddientity.h"

namespace DDI {

class Notes : public DDIEntity
{
public:
    Notes(std::string _ID = "");

    static const std::string _label_;
};

}

#endif // NOTES_H
