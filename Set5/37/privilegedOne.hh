#ifndef INCLUDED_PRIVILEGEDONE_
#define INCLUDED_PRIVILEGEDONE_

#include <iosfwd>
#include <vector>

#include "noEntry.hh"

class PrivilegedOne
{
    std::vector<NoEntry *> d_noEntry;

    public:
        PrivilegedOne(std::string const &fname);

    private:
        NoEntry nextEntry(std::istream &in);    // empty name: all were read
};

#endif
