#include "numbers.ih"

Numbers operator-(Numbers const &lhs, Numbers const &rhs)
{
    Numbers tmp{ lhs };                //Create copy of the current object
    tmp.sub(rhs);
    return tmp;
}
