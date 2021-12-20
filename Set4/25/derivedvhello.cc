#include "main.ih"
void Derived::vHello(std::ostream &out)
{
    out << d_text << '\n';
}
