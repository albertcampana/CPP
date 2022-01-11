#include "strings.ih"
void Strings::operator+=(const string str){
    string * ptr = new string(str);         // make pointer to a string
    d_str.push_back(ptr);                   // push pointer to vector
}