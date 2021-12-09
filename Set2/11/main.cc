#include "main.ih"

int main()
{
    try
    {
        try
        {
	    try
	    {
		try
		{
                   string msg{ "Exception" };  // Create exception 
                                               // Print address of the exception
		    cout << "Initial Object-> ";
		    cout << msg << " address: " << &msg << '\n';
		    throw msg;                 // Throw exception
		}
		catch (string const msg)
		{                              // Print the address of the
		                               // catched exception
		    cout << "Caught-> " << msg << " address: " << &msg << '\n';
		    throw;                     // Empty throw
		}
	    }
	    catch (string const msg)
	    {                                  // Print the address of the
		                               // catched exception 
		cout << "Caught [empty throw]-> ";
		cout << msg << " address: " << &msg << '\n';
		throw;
	    }
	}
	catch (string const &msg)
	{                                      
	    cout << "Caught by reference-> ";  // Print address of the exception
	    cout << msg << " address: " << &msg << '\n';
            throw;
	}
    }
    catch (string const msg)
    {                                          
        cout << "Caught original object-> ";   // Print address of the exception 
        cout << msg << " address: " << &msg << '\n';
    } 
}
