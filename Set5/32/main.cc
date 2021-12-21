#include "main.ih"

int main()
{
    set<string> stringSet;
    string word;

    while (cin >> word)                // Read all word from standard input
        stringSet.insert(word);        // Insert each word into the set

    set<string>::iterator iterator;    // Loop all the elements in the set
    for (iterator = stringSet.begin(); iterator != stringSet.end(); ++iterator)
        cout << *iterator << "\n";     // Print each element
}
