#include "numbers.ih"

Numbers operator*(int lhs, Numbers const &rhs)
{
    return rhs*lhs;
}
