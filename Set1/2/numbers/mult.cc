#include "numbers.ih"

void Numbers::mult(int scalar)
{
    Numbers tmp{ *this };              //Create copy of the current object
                                       //Visit all the arrays elements
    for (size_t idx = 0; idx != tmp.d_size; ++idx)
        tmp[idx] *= scalar;            //Multiply each element
    swap(tmp);
}
