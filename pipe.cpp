#include "pipe.h"

DDI::Pipe::Pipe() :
    std::ios(0),
    std::ostream(new PipeBuf(&std::cout))
{
}

DDI::Pipe::Pipe(std::ostream* _sink) :
    std::ios(0),
    std::ostream(new PipeBuf(_sink, true))
{
}

void DDI::Pipe::setSink(std::ostream* _sink)
{
    PipeBuf *buf = static_cast<PipeBuf *>(rdbuf());
    buf->setSink(_sink);
}

DDI::PipeBuf::PipeBuf(std::ostream* _sink, bool _good) :
    std::streambuf(),
    sink(_sink),
    good(_good)
{
    setp(buf, buf + (bufSize - 1));
}

void DDI::PipeBuf::setSink(std::ostream *_sink)
{
    sink = _sink;
    good = true;
}

int DDI::PipeBuf::overflow(int _c = EOF)
{
    int result = _c;
    if (_c != EOF) {
        *pptr() = _c;
        pbump(1);
    }
    result = flushBuffer();

    return (result == EOF) ? EOF : _c;
}

int DDI::PipeBuf::sync()
{
    if (good)
        *sink << std::flush;
    return (flushBuffer() == EOF) ? -1 : 0;
}

int DDI::PipeBuf::flushBuffer () {
    int num = pptr()-pbase();
    if (good)
        sink->write(buf, num);

    if (sink->eof()) {
        return EOF;
    }
    pbump(-num); // reset put pointer accordingly
    return num;
}

DDI::Pipe DDI::out;
