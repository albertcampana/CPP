#include "vectorString.ih"

VectorString::VectorString(VectorString const &other)
{
    vector_d.assign(other.vector_d.begin(), other.vector_d.end());
}
