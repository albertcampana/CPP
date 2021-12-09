class Derived : public Base
{
    private:
        Derived(String text)
        {
            d_text = text;
        }

        void hello()
        {
            cout << "derived hello\n";
        }
    public:
        void vHello(ostream &out)
        {
            out << d_text;
        }
};