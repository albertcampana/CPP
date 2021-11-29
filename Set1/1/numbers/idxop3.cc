#include "numbers.ih"

int &Numbers::operatorIndex(size_t index) const
{
    return d_nums[index];
}
