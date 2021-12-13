class Message
{
    Base *d_base;
    
    public:
        Message(Base &base)
        {
            d_base = &base;
        }

        void show()
        {
            d_base->hello(std::cout);
        }
};