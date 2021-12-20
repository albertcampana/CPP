#include "vectorString.ih"

VectorString::VectorString(string filename)
{
    ifstream file;
    file.open(filename);

    string word;
    set<string> uniqueWords;
    
    while(file >> word)
        uniqueWords.insert(word);
    
    vector_d.assign(uniqueWords.begin(), uniqueWords.end());
    
    vector_d.push_back("Word");
}

