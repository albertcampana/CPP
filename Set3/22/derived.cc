#include "main.ih"

Derived::Derived()
{
    Derived::derived_d = "Hello!";
    cout << "Derived constructor\n";
}

void Derived::hello()
{
    cout << "String: " << Derived::derived_d << "\n";
    cout << "Derived: hello...\n";
}
