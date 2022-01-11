#include "strings.ih"

Strings::Strings(int argc, char **argv)
:
    d_str(argv+1, argv+argc)
    {}
