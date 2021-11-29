#include "numbers.ih"
                                       
void Numbers::add(Numbers const &other)
{
    Numbers tmp{ *this };              //Create copy of the current object
    if (tmp.sameSize(other))
    {                                  //Visit all the arrays elements
        for (size_t idx = 0; idx != tmp.d_size; ++idx)
            tmp[idx] += other[idx];    //Sum each element
        swap(tmp);
    }
}
