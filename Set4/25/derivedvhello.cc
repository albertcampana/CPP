#include "main.ih"
Derived::void vHello(std::ostream &out) override
{
    out << d_text << '\n';
}