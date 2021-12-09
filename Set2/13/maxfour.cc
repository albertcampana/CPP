#include "maxfour.ih"

MaxFour::MaxFour()
{
    cout << MaxFour::s_n0bjects << "\n";
    if (++MaxFour::s_n0bjects == 5)    // Once four objects have been created
        throw false;                   // throw exception
}

