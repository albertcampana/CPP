#include "strings.ih"

Strings::Strings(int argc, char **argv)
{
    for(int i = 0; i < argc; i++)
    {
        string str = argv[i];
        string * ptr = new string(str);
        d_str.push_back(ptr);
    }
}
