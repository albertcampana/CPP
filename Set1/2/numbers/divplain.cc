#include "numbers.ih"

Numbers operator/(Numbers const &lhs, int rhs)
{
    Numbers tmp{ lhs };                //Create copy of the lhs Number

    if (rhs != 0)                      //Check if argument is 0
        tmp.div(rhs);                  
    else                               //Write an error message
        cerr << "Trying to divide by 0";
        
    return tmp;
}
