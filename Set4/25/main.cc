#include "main.ih"

int main()
{
    Base base = Base();                        // Initialize Base object
    Derived derived = Derived("Derived");      // Initialize Derived object

    Message messageBase = Message(base);       // Create Message using base
    Message messageDerived = Message(derived); // Create Message using derived

    messageBase.show();                        // Should print Base vHello

    messageDerived.show();                     // Should print Derived vHello
}