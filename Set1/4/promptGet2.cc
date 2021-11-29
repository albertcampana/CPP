#include <string>
#include <iostream>

using namespace std;

istream& promptGet(istream &in, string &str)
{
    cout << "Enter a line or ^D\n";     // ^D signals end-of-input

    return getline(in, str);
}
      
