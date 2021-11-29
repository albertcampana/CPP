#include "numbers.ih"

Numbers &Numbers::operator-=(Numbers const &rhs)
{
    Numbers tmp{ *this };              //Create copy of the current object
    tmp.sub(rhs);
    swap(tmp);
    return *this;
}
