class Base
{
    private:
        virtual void vHello(std::ostream &out)
        {
            out << "Hello from Base\n";
        }
    public:
        virtual ~Base()
        {}
        void hello(std::ostream &out)
        {
            vHello(out);
        }
};
