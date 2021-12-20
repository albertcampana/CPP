#ifndef INCLUDED_MSG_H_
#define INCLUDED_MSG_H_

#include <cstddef>

class Base
{
    public:
        Base::enum class Msg
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
};s

inline constexpr size_t valueOf(Base::Msg msg)
{
    return static_cast<size_t>(msg);
}
    
inline constexpr Base::Msg beginMsg()           // allow for-stmnts
z

inline constexpr Base::Msg endMsg()
{
    return static_cast<Base::Msg>(valueOf(Base::Msg::ALL) + 1);
}

inline Base::Msg &operator++(Base::Msg &msg)        // no ++ if Msg == NONE
{
    return reinterpret_cast<Base::Msg &>(reinterpret_cast<int &>(msg) <<= 1);
}

inline constexpr bool operator!(Base::Msg m1)
{
    return m1 == Base::Msg::NONE;
}

inline constexpr Base::Msg operator|(Base::Msg m1, Base::Msg m2)
{
    return static_cast<Base::Msg>(
                valueOf(m1) | valueOf(m2)
            );
}

inline constexpr Base::Msg operator&(Base::Msg m1, Base::Msg m2)
{
    return static_cast<Base::Msg>(
                valueOf(m1) & valueOf(m2)
            );
}

inline constexpr Base::Msg operator^(Base::Msg m1, Base::Msg m2)
{
    return static_cast<Base::Msg>(
                valueOf(m1) ^ valueOf(m2)
            );
}

inline constexpr Base::Msg operator~(Base::Msg m1)
{
    return static_cast<Base::Msg>(~valueOf(m1)) & Base::Msg::ALL;
}  



#endif
