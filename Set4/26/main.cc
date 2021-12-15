#include "main.ih"

int main()
{
    Base **bp = derivedFactory(10);    //Initialize a pointer to size pointers 
                                       //to Derived objects
    
    for (size_t idx = 0; idx < 10; ++idx)
    {                                  //Check that the pool is correctly 
        bp[idx]->hello(cout);          //initialized
    }   

    for (size_t idx = 0; idx < 10; ++idx)
    {
        delete bp[idx];                //Free all the allocated memory
    }
    
    delete bp;                         //Free the pointer to pointer memory
}
