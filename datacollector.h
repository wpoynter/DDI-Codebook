#ifndef DATACOLLECTOR_H
#define DATACOLLECTOR_H

#include "ddientity.h"

namespace DDI {

class DataCollector : public DDIEntity
{
public:
    DataCollector(std::string _ID = "");
};

}

#endif // DATACOLLECTOR_H
