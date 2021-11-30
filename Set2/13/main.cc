#include "main.ih"

size_t MaxFour::s_n0bjects = 0;

int main()
{
    MaxFour *mf = 0;
    try 
    {
        mf = new MaxFour[10];          // Construct 10 MaxFour objects
    }
    catch (...)
    {
        delete[] mf;                   // Delete the array of objects
                                       // Print error message
        cerr << "max. number of objects reached";
    }
}
