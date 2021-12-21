#ifndef INCLUDED_PRIVILEGEDTWO_
#define INCLUDED_PRIVILEGEDTWO_

#include "noEntry.hh"
class PrivilegedTwo {
    NoEntry content;

public:
    PrivilegedTwo() = default;
    PrivilegedTwo(const PrivilegedTwo &) = default;
    PrivilegedTwo(const NoEntry & content) : content(content) {}
    NoEntry &getContent() { return content; }
};

#endif
