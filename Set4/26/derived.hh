class Derived : public Base
{
    std::string d_text;

    public:
        Derived();
        
        virtual ~Derived();

    private:       
        void vHello(std::ostream &out) override;
};
