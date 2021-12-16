#include "randBuffer.ih"

RandBuffer::RandBuffer(int min, int max, size_t seed)
:
    d_min(min),
    d_range(max - min + 1),
    d_end(RAND_MAX - RAND_MAX % d_range), // d_end is multiple of d_range
    d_buffer(new char[8])
{
    if (max <= min)
        throw range_error{" min. value must be smaller than max. value"};

    srandom(seed);
    setg(0, 0, 0);              // initially no buffer
}


int RandBuffer::underflow()
{
    if(gptr() < egptr())               //Check if has reached end of buffer
        return *gptr();
    
    stringstream o_str;                //Cast the new random value to size_t 
    o_str << static_cast<size_t>(d_range * random() / (RAND_MAX + 0.1));
                                       //Copy the number to the d_buffer
    size_t n = o_str.str().copy(d_buffer, 8, 0);
                                       //Initialize the input buffer
    setg(d_buffer, d_buffer, d_buffer + n);
    
    return *gptr();
}
