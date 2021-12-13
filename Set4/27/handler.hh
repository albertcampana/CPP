class Handler : private Msg
{
    inline constexpr Handler beginMsg()           // allow for-stmnts
    {
        return Msg::DEBUG;
    }
};