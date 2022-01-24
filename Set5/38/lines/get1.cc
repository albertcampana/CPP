#include "lines.ih"

vector<string> const &Lines::get()
{
            // retrieve vector associated to `this'
    return LinesMap.at(this);
}
