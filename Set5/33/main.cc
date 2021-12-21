#include "main.ih"

int main()
{
    map<string, int> object;
    string word;
    
    while (cin >> word)                // Read all word from standard input
        ++object[word];                // Insert each word into the map
   
    map<string, int>::const_iterator iterator;
                                       // Loop all the elements in the map
    for (iterator = object.begin(); iterator != object.end(); ++iterator)
        cout << iterator->first << " " << iterator->second << "\n";
}

