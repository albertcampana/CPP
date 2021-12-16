class RandBuffer : public std::streambuf
{
    int d_min;
    int d_max;
    int d_range;
    int d_end;
    char* d_buffer;
    
    public:
        RandBuffer(int min, int max, size_t seed);
    
    private:
        int underflow();
};


