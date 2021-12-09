#include "main.ih"

Base::Base()
{
    cout << "Base default constructor \n";
}

Base::Base(Base const &other)
{
    cout << "Base copy constructor \n";
}

Base::Base(Base &&tmp)
{
    cout << "Base move constructor \n";
}
