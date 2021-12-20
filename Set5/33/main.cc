#include "main.ih"

int main()
{
    map<string, int> object;
    string word;
    
    while(cin >> word) ++object[word];
   
    map<string, int>::const_iterator iterator;
    for (iterator = object.begin(); iterator != object.end(); ++iterator)
        cout << iterator->first << " " << iterator->second << "\n";
}

