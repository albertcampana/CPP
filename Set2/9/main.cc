#include <iostream>

using namespace std;

int main()
{
    string line;
    
    while (true)                       //loop to avoid program to abort
    {
        try
        {    
	    while (true)               //Repeatedly request user input
	    {
		cout << "please enter a number: ";
		getline(cin, line);
		if (line == "q")       //End the program
		{
		    cout << "leaving...\n";
		    return 0;
		}                      //Print the value
		cout << stod(line) << '\n';
	    }
	}
	catch (...)                    
	{                              //Print the error message
	    cout << "`" << line << "'" << " is not a number\n" ;
	}
    }
}
