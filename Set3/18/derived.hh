class Derived: public Base
{
    public:
        Derived();
        Derived(Derived const &other);
        Derived(Derived &&tmp);
};
