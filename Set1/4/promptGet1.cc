#include <string>
#include <iostream> 

using namespace std;

bool promptGet(istream &in, string &str)
{
    cout << "Enter a line or ^D\n";     // ^D signals end-of-input

    return static_cast<bool>(getline(in, str));
}
      
