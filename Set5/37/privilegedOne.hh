#ifndef INCLUDED_PRIVILEGEDONE_
#define INCLUDED_PRIVILEGEDONE_

#include <iosfwd>
#include <vector>

#include "privilegedTwo.hh"

class PrivilegedOne
{
    std::vector<PrivilegedTwo> d_noEntry;

    public:
        PrivilegedOne(std::string const &fname);

    private:
        NoEntry nextEntry(std::istream &in);    // empty name: all were read
};

#endif
