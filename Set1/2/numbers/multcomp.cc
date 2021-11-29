#include "numbers.ih"

Numbers &Numbers::operator*=(int rhs)
{
    Numbers tmp{ *this };              //Create copy of the current object
    tmp.mult(rhs);
    swap(tmp);
    return *this;
}
