#include "maxfour.ih"

MaxFour::MaxFour()
{
    if (++MaxFour::s_n0bjects == 4)    // Once four objects have been created
        throw false;                   // throw exception
}

