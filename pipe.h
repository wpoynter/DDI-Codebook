#ifndef PIPE_H
#define PIPE_H

#include <iostream>

namespace DDI {

class Pipe
{
private:
    std::ostream* sink;
    bool good;
public:
    Pipe();
    Pipe(std::ostream* _sink);

    void setSink(std::ostream* _sink);

    void operator<<(std::ostream &_ss);
};

}

#endif // PIPE_H
