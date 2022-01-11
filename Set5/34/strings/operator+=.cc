#include "strings.ih"
void Strings::operator+=(const string& str){
    d_str.push_back(str);
}