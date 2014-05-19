#ifndef DATACOLL_H
#define DATACOLL_H

#include <list>

#include "ddientity.h"
#include "timemeth.h"
#include "datacollector.h"
#include "sampproc.h"
#include "collmode.h"
#include "sources.h"
#include "weight.h"
#include "cleanops.h"

namespace DDICodebook {

class DataColl : public DDIEntity
{
private:
    //Children
    std::list<TimeMeth*> timeMeth;                      //Optional
    std::list<DataCollector*> dataCollector;            //Optional
    std::list<SampProc*> sampProc;                      //Optional
    std::list<CollMode*> collMode;                      //Optional
    Sources *sources;                                   //Optional
    std::list<Weight*> weight;                          //Optional
    std::list<CleanOps*> cleanOps;                      //Optional
public:
    DataColl(std::string _ID);
};

}

#endif // DATACOLL_H
