#include "main.ih"

int main()
{
    Derived derived;
    Derived derivedCopy = Derived(derived);
    Derived(move(derivedCopy));
}
