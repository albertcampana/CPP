#include "strings.ih"

Strings::Strings(int argc, char **argv) : vector<string>()
    {
        for (int idx = 0;idx < argc; ++idx)
            push_back(argv[idx]);
    }