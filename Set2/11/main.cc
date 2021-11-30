#include "main.ih"

int main()
{
    try
    {
        try
        {
            string msg{ "Exception" }; // Create exception
                                       // Print address of the exception
            cout << "Initial Object: " << msg << " address: " << &msg << '\n';
            throw msg;                 // Throw exception
        }
        catch (string const &msg)
        {                              // Print the address of the
                                       // catched exception
            cout << "caught: " << msg << " address: " << &msg << '\n';
            throw;                     // Empty throw
        }
    }
    catch (string const &msg)
    {                                  // Print the address of the
                                       // catched exception 
        cout << "caught [empty throw]: " << msg << " address: " << &msg << '\n';
    }
    
    
}
