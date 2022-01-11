#include "strings.ih"
string Strings::operator[](const size_t idx){
    // return string to which pointer at index idx in vector d_str points to
    return *(d_str.at(idx));                    