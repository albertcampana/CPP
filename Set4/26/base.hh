class Base
{
    public:
        virtual ~Base();
        void hello(std::ostream &out);

    private:
        virtual void vHello(std::ostream &out);
};
