#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <string>
#include <vector>
using namespace std;

class Strings
{
    vector<string*> d_str; 

    public:
        Strings() = default;
        Strings(int argc, char *argv[]);    // strings2.cc
        Strings(char *environLike[]);       // strings3.cc

        size_t size() const;
        size_t capacity();
        void resize(size_t n);
        void reserve(size_t n);
        string at(size_t idx);
        void operator+=(const string str);
        string operator[](const size_t idx);

};

    // potentially dangerous practice: inline accessors
inline size_t Strings::size() const
{                                           
    return d_str.size();                    
}

inline size_t Strings::capacity()
{
    return d_str.capacity();
}

inline void Strings::resize(size_t n)
{
    d_str.resize(n);
}

inline void Strings::reserve(size_t n)
{
    d_str.reserve(n);
}

inline string Strings::at(size_t idx)
{
    return *(d_str.at(idx));
}

#endif

