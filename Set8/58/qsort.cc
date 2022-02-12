#include <iostream>
#include <future>

using namespace std;

void qsort(int *beg, int *end)
{
    if (end - beg <= 1)
        return;

    int lhs = *beg;
    int *mid = partition(beg + 1, end, 
        [&](int arg)
        {
            return arg < lhs;
        }
    );

    swap(*beg, *(mid - 1));

    auto fut1 = async(launch::async, [beg, mid]{qsort(beg, mid);});
    auto fut2 = async(launch::async, [mid, end]{qsort(mid, end);});
}
