#include "main.ih"

Base derivedFactory::**derivedFactory(size_t size)
{
    Base **array = new Base *[size];  //Create an array of Base pointers
                                      //Loop all the elements
    for (size_t idx = 0; idx < size; ++idx)
    {
        array[idx] = new Derived{};   //Assign a Derived object to each pointer
    }
    
    return array;
}