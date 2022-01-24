#include "strings.ih"

Strings::Strings(char **environ) : vector<string>()
    {
        for (char **env = environ; *env != 0; ++env)
        {
            push_back(*env);
        }
    }