#include "vectorString.ih"

VectorString::VectorString(VectorString const &other)
{
                                       // Copy other vector
    vector<string> uniqueWordsVector(other.uniqueWordsVector);
}
