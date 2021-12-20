#include "main.ih"

int main()
{
    string filename = "input.txt";
    VectorString vectorString = VectorString(filename);
    
    cout << "Capacity: " << vectorString.capacity() << endl;
    cout << "Size: " << vectorString.size() << endl;
    
    VectorString(vectorString).swap(vectorString);
    
    cout << "Capacity: " << vectorString.capacity() << endl;
    cout << "Size: " << vectorString.size() << endl;    
}
