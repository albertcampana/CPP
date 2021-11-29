#include "numbers.ih"

Numbers operator+(Numbers const &lhs, Numbers const &rhs)
{
    Numbers tmp{ lhs };                //Create copy of the lhs Number
    tmp.add(rhs);                      //Add both elements
    return tmp;
}
