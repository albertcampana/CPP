class Base
{
    private:
        virtual void vHello(ostream &out)
        {
            out << "hello from Base\n";
        }
    public:
        void hello(ostream &out)
        {
            vHello(out);
        }
};