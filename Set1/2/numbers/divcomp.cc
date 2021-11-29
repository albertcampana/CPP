#include "numbers.ih"

Numbers &Numbers::operator/=(int rhs)
{
    Numbers tmp{ *this };              //Create copy of the lhs Number
    if (rhs != 0)
        tmp.div(rhs);                  //Add both elements
    else
        cerr << "Trying to divide by 0";
        
    swap(tmp);
    return *this;
}
