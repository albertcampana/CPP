#include "main.ih"

int main()
{
    try
    {
        throw "Error explanation\n";   // Throw an exception
    }
    catch (char const *exception)
    {
        cout << exception;             // Print the exception
        exit(3);                       // Terminate program
        cout << "Won't be printed.\n";
    }
}
