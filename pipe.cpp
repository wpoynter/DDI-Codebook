#include "pipe.h"

DDI::Pipe::Pipe() : sink(&std::cout), good(false)
{
}

DDI::Pipe::Pipe(std::ostream* _sink) : sink(_sink), good(true)
{
}

void DDI::Pipe::setSink(std::ostream* _sink)
{
    good = true;
    sink = _sink;
}

void DDI::Pipe::operator<<(std::ostream &_ss)
{
    if (good)
        *sink << _ss;
}
