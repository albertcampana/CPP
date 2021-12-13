class Derived : public Base
{
    std::string d_text;

    private:       
        void vHello(std::ostream &out) override
        {
            out << d_text << '\n';
        } 

    public:
        Derived(std::string text)
        {
            d_text = text;
        }
};