#include "main.ih"

int main()
{
    string filename = "input.txt";     // Construct VectorString object
    VectorString vectorString = VectorString(filename);
    
                                       // Print size and capacity
    cout << "Size: " << vectorString.size() << endl;
    cout << "Capacity: " << vectorString.capacity() << endl;
    
                                       // Swap object with its copy
    VectorString(vectorString).swap(vectorString);
    
                                       // Print size and capacity
    cout << "Size: " << vectorString.size() << endl;
    cout << "Capacity: " << vectorString.capacity() << endl;    
}
