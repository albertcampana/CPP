#include "numbers.ih"

void Numbers::sub(Numbers const &other)
{
    Numbers tmp{ *this };              //Create copy of the current object
    if (tmp.sameSize(other))
    {                                  //Visit all the arrays elements
        for (size_t idx = 0; idx != tmp.d_size; ++idx)
            tmp[idx] -= other[idx];    //Divide each element
        swap(tmp);
    }
}
