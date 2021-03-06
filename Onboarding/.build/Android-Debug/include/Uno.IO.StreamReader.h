// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.TextReader.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}
namespace g{namespace Uno{namespace IO{struct StreamReader;}}}
namespace g{namespace Uno{namespace Text{struct Decoder;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class StreamReader :1715
// {
::g::Uno::IO::TextReader_type* StreamReader_typeof();
void StreamReader__ctor_1_fn(StreamReader* __this, ::g::Uno::IO::Stream* stream);
void StreamReader__Dispose1_fn(StreamReader* __this, bool* disposing);
void StreamReader__New1_fn(::g::Uno::IO::Stream* stream, StreamReader** __retval);
void StreamReader__ReadBuffer_fn(StreamReader* __this);
void StreamReader__ReadToEnd_fn(StreamReader* __this, uString** __retval);

struct StreamReader : ::g::Uno::IO::TextReader
{
    uStrong<uArray*> _byteBuffer;
    int _byteLen;
    uStrong<uArray*> _charBuffer;
    int _charLen;
    int _charPos;
    uStrong< ::g::Uno::Text::Decoder*> _decoder;
    uStrong< ::g::Uno::IO::Stream*> _stream;

    void ctor_1(::g::Uno::IO::Stream* stream);
    void ReadBuffer();
    uString* ReadToEnd();
    static StreamReader* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::Uno::IO
