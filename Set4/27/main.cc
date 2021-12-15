#include "main.ih"
#include <cstddef>

enum class Msg
{
    NONE = 0,
    DEBUG   = 1 << 0,
    INFO    = 1 << 1,
    NOTICE  = 1 << 2,
    WARNING = 1 << 3,
    ERR     = 1 << 4,
    CRIT    = 1 << 5,
    ALERT   = 1 << 6,
    EMERG   = 1 << 7,
    ALL = (1 << 8) - 1,
};

inline constexpr size_t valueOf(Msg msg)
{
    return static_cast<size_t>(msg);
}
    
inline constexpr Msg beginMsg()           // allow for-stmnts
{
    return Msg::DEBUG;
}

inline constexpr Msg endMsg()
{
    return static_cast<Msg>(valueOf(Msg::ALL) + 1);
}

inline Msg &operator++(Msg &msg)        // no ++ if Msg == NONE
{
    return reinterpret_cast<Msg &>(reinterpret_cast<int &>(msg) <<= 1);
}

inline constexpr bool operator!(Msg m1)
{
    return m1 == Msg::NONE;
}

inline constexpr Msg operator|(Msg m1, Msg m2)
{
    return static_cast<Msg>(
                valueOf(m1) | valueOf(m2)
            );
}

inline constexpr Msg operator&(Msg m1, Msg m2)
{
    return static_cast<Msg>(
                valueOf(m1) & valueOf(m2)
            );
}

inline constexpr Msg operator^(Msg m1, Msg m2)
{
    return static_cast<Msg>(
                valueOf(m1) ^ valueOf(m2)
            );
}

inline constexpr Msg operator~(Msg m1)
{
    return static_cast<Msg>(~valueOf(m1)) & Msg::ALL;
}

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
    
int main()
{
    show(Msg::NONE);
    show(Msg::NONE | Msg::EMERG);
    show(Msg::ALERT | Msg::CRIT);
    show(Msg::ALL   & (Msg::ERR | Msg::WARNING));
    show(~Msg::NOTICE);
}
