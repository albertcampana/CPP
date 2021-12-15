#include "main.ih"

namespace
{
    char const *name[] = 
    {
        "DEBUG",
        "INFO",
        "NOTICE",
        "WARNING",
        "ERR",
        "CRIT",
        "ALERT",
        "EMERG",
    };
}

void show(Msg msg)
{
    if (msg == Msg::NONE)
    {
        cout << "NONE\n";
        return;
    }

    for (
        auto [test, end, idx] = tuple{ beginMsg(), endMsg(), 0 };
            test != end; ++test, ++idx)
    {
        if ((test & msg) != Msg::NONE)
            cout << name[idx] << ' ';
    }
    
    cout << '\n';
}