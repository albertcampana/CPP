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

void show(Base::Msg msg)
{
    if (msg == Base::Msg::NONE)
    {
        cout << "NONE\n";
        return;
    }

    Base::Msg test = beginMsg();
    Base::Msg end = endMsg();
    for (int idx = 0; test != end; ++test, ++idx)
    {
        if ((test & msg) != Base::Msg::NONE)
            cout << name[idx] << ' ';
    }
    
    cout << '\n';
}
