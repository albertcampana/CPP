#include "main.ih"

main()
{
    Base base = Base();
    Derived derived = Derived("derived");  
    Message messageBase = Message(base);
    Message messageDerived = Message(derived);

    messageBase.show();

    messageDerived.show();
}