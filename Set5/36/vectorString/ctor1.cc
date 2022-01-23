#include "vectorString.ih"

VectorString::VectorString(string filename)
{
    ifstream file(filename);

    string word;
    set<string> uniqueWords;
    
    while(file >> word)                // Read all words of the file
        uniqueWords.insert(word);      // Insert each word into a set
    
                                       // Construct a vector with set elems
    uniqueWordsVector.assign(uniqueWords.begin(), uniqueWords.end());
    
    uniqueWordsVector.push_back("Word");        // Add one additional word to the vector
}