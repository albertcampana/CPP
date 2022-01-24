#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <string>
#include <vector>
using namespace std;


class Strings : vector<string>
{
    public:
        Strings() = default;
        Strings(int argc, char **argv);     // strings2.cc
        Strings(char **environ);            // strings3.cc

        using vector<string>::size;
        using vector<string>::capacity;
        using vector<string>::resize;
        using vector<string>::reserve;
        using vector<string>::at;
        using vector<string>::operator[];
        void operator+=(string str);
};

        
#endif
