#include "main.ih"

int main()
{
    set<string> stringSet;
    string word;

    while (cin >> word)                // Read all word from standard input
        stringSet.insert(word);        // Insert each word into the set

    for(auto iterator : stringSet) {   // Loop all the elements in the set
        cout << iterator << '\n';      // Print each element
    }       
}
