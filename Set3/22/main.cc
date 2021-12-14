#include "main.ih"

int main()
{
    Derived derived;
    caller(derived);
    
    Base base;
    caller(base);
}
