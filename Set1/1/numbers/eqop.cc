#include "numbers.ih"

bool operator==(Numbers const &lhs, Numbers const &rhs)
{                   
    if (lhs.d_size != rhs.d_size)      //Checks both Numbers have same size
        return false;                  
                                       //visit all the numbers' elements
    for (size_t idx = 0; idx < lhs.d_size; ++idx)
	if (lhs[idx] != rhs[idx])      //Check if any element is different
	    return false;
    
    return true;
}
