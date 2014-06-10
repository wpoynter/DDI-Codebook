#ifndef PIPE_H
#define PIPE_H

#include <iostream>

namespace DDI {

class Pipe : public std::ostream
{
public:
    Pipe();
    Pipe(std::ostream* _sink);

    void setSink(std::ostream* _sink);

    //void operator<<(const char * _txt);
};

class PipeBuf : public std::streambuf {
private:
    virtual int overflow(int _c);
    virtual int sync();
    virtual int flushBuffer();
protected:
    /** Buffer size */
    static const int bufSize = 1;
    /** Output buffer */
    char buf[bufSize];
    std::ostream* sink;
    bool good;
public:
    PipeBuf(std::ostream* _sink, bool _good = false);

    void setSink(std::ostream* _sink);
};

extern Pipe out;

}

#endif // PIPE_H
