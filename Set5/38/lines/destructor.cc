#include "lines.ih"

Lines::~Lines()
{
    LinesMap.erase(this);                // delete the vector
}