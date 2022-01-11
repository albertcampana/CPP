#include "strings.ih"

Strings::Strings(char **environLike)
{
    for (char **env = environLike; *env != 0; env++)
    {
        char *env1 = *env;
        string * ptr = new string(env1);
        d_str.push_back(ptr);
    }
}
