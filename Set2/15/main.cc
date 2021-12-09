#include "main.ih"

int main()
{
    try
    {
        string msg = "Error explanation";
        throw msg;                     // Throw an exception
    }
    catch (string const exception)
    {
        cout << exception << "\n";     // Print the exception
        exit(3);                       // Terminate program
        cout << "Won't be printed.\n";
    }
}
