class PrivilegedTwo {
    NoEntry content;

public:
    PrivilegedTwo() = default;
    PrivilegedTwo(const PrivilegedTwo &) = default;
    PrivilegedTwo(const NoEntry & content) : content(content) {}
    NoEntry &getContent() { return content; }
};