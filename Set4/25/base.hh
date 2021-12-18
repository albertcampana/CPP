class Base
{
    public:
        void hello(std::ostream &out);
    private:
        virtual void vHello(std::ostream &out);
};