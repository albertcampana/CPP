#include "main.ih"

int main()
{
    Base **bp = derivedFactory(10);

    for (size_t idx = 0; idx <= 10; ++idx)
    {
        bp[idx]->hello(cout);
    }
    // add your code here to return all allocated memory to the 
    // common pool.
}
