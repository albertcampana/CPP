class Base
{
    private:
        virtual void vHello(std::ostream &out)
        {
            out << "Hello from Base\n";
        }
    public:
        void hello(std::ostream &out)
        {
            vHello(out);
        }
};