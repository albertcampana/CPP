#include "numbers.ih"

Numbers &Numbers::operator+=(Numbers const &rhs)
{
    Numbers tmp{ *this };              //Create copy of the current object         
    tmp.add(rhs);                      //Add both elements
    swap(tmp);                         
    return *this;
}

