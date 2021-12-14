#include "main.ih"

void caller(Base &obj)
{
    Base *base = &obj;
    Derived *derived;
    derived = static_cast<Derived *>(base);
    derived->hello();
}
