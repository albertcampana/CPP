#include "numbers.ih"

void Numbers::div(int scalar)
{
    Numbers tmp{ *this };              //Create copy of the current object    
                                       //Visit all the arrays elements
    for (size_t idx = 0; idx != tmp.d_size; ++idx)
        tmp[idx] /= scalar;            //Divide each element
    swap(tmp);
}
