#ifndef DATACOLL_H
#define DATACOLL_H

#include <vector>

#include "ddientity.h"
#include "timemeth.h"
#include "datacollector.h"
#include "sampproc.h"
#include "collmode.h"
#include "sources.h"
#include "weight.h"
#include "cleanops.h"

namespace DDI {

class DataColl : public DDIEntity
{
private:
    //Children
    std::vector<TimeMeth*> timeMeth;                      //Optional
    std::vector<DataCollector*> dataCollector;            //Optional
    std::vector<SampProc*> sampProc;                      //Optional
    std::vector<CollMode*> collMode;                      //Optional
    Sources *sources;                                   //Optional
    std::vector<Weight*> weight;                          //Optional
    std::vector<CleanOps*> cleanOps;                      //Optional
public:
    DataColl(std::string _ID);
};

}

#endif // DATACOLL_H
