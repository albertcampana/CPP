#include "numbers.ih"

Numbers operator*(Numbers const &lhs, int rhs)
{
    Numbers tmp{ lhs };                //Create copy of the current object
    tmp.mult(rhs);
    return tmp;
}
