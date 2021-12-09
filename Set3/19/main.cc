#include <iostream>

struct Base
{
    Base()
    {
        std::cout << "Base constructor\n";
    }
    ~Base()
    {
        std::cout << "Base destructor\n";
    }
};

struct Derived: public Base
{
    Derived()
    {
        std::cout << "Derived constructor\n";
    }
    ~Derived()
    {
        std::cout << "Derived destructor\n";
    }
};

int main()
{
    Derived d;
}
