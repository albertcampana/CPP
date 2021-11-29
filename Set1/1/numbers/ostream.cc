#include "numbers.ih"

ostream &operator<<(ostream &out, Numbers const &numbers)
{                                      
                                       //visit all numbers' ints.
    for (size_t idx = 0; idx < numbers.size(); ++idx )
        out << numbers[idx] << ' ';    //insert ints into std::ostream
                                       //separated by blanks
    return out;
}
