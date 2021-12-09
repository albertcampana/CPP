class Message
{
    Base d_base;

    private:
        Message(Base &base)
        {
            d_base = base;
        }
    
    public:
        show()
        {
            d_base.hello();
        }
}