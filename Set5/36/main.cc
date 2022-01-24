#include "main.ih"

int main()
{
                                       // Construct VectorString object
    VectorString vectorString = VectorString("input.txt");
    
                                       // Print size and capacity
    cout << "Size: " << vectorString.size() << '\n'
        << "Capacity: " << vectorString.capacity() << '\n';
    
                                       // Swap object with its copy
    VectorString(vectorString).swap(vectorString);
    
                                       // Print size and capacity
    cout << "Size: " << vectorString.size() << '\n'
        << "Capacity: " << vectorString.capacity() << '\n';    
}
