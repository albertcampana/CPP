#include "main.ih"

Derived::Derived()
:
    Base()
{
    cout << "Derived default constructor \n";
}

Derived::Derived(Derived const &other)
:
    Base(other)
{
    cout << "Derived copy constructor \n";
}

Derived::Derived(Derived &&tmp)
:
    Base(move(tmp))
{
    cout << "Derived move constructor \n";
}
