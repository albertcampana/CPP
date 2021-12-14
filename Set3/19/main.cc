#include <iostream>

using namespace std;

struct Base
{
    public:
        string base_member;
    
        Base()
        {
            base_member = "Hello!";
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
        cout << base_member << "\n";
    }
    ~Derived()
    {
        std::cout << "Derived destructor\n";
        cout << base_member << "\n";
    }
};

int main()
{
    Derived d;
}
