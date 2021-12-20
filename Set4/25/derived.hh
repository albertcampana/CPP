class Derived : public Base
{
    std::string d_text;

    public:
        Derived(std::string text);

    private:       
        void vHello(std::ostream &out) override;
    
};
