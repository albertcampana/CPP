#include "main.ih"

int main()
{
    set<string> stringSet;
    string word;

    while (cin >> word)
        stringSet.insert(word);

    set<string>::iterator iterator;
    for (iterator = stringSet.begin(); iterator != stringSet.end(); ++iterator)
        cout << *iterator << "\n";
    
}
