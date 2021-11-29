#include "numbers.ih"

bool const Numbers::sameSize(Numbers const &other)
{
    if (this -> d_size == other.d_size)  //Check that both sizes are equal
        return true;
    
    cerr << "Numbers of different size"; //Send an error message
    return false;
}
