//#define XERR
#include "privilegedOne.ih"

PrivilegedOne::PrivilegedOne(string const &fname)
{
    ifstream in{ fname };

    while (true)
    {
        NoEntry next = nextEntry(in); 

        if (next.name().empty())
            break;

        d_noEntry.push_back(&next);          // oops...
    }
}

NoEntry PrivilegedOne::nextEntry(istream &in)
{
    NoEntry ret;

    in >> ret.d_name >> ret.d_area >> ret.d_date;

    if (not in)                         // no more NoEntries: ensure
        ret.d_name.clear();             // that d_name is empty

    return ret;
}

