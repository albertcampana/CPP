#ifndef INCLUDED_NUMBERS_H_
#define INCLUDED_NUMBERS_H_

#include <iosfwd>
#include <initializer_list>

class Numbers
{
    friend Numbers operator+(Numbers const &lhs, Numbers const &rhs);
    friend Numbers operator-(Numbers const &lhs, Numbers const &rhs);

    friend Numbers operator*(Numbers const &lhs, int rhs);
    friend Numbers operator*(int lhs, Numbers const &rhs);

    friend Numbers operator/(Numbers const &lhs, int rhs);
    
    size_t d_size = 0;
    int *d_nums = 0;

    
    public:
        explicit Numbers(size_t size);
    
        Numbers(size_t size, int value);
        Numbers(size_t size, int *values);
        Numbers(std::initializer_list<int> iniList);
        Numbers(Numbers const &other);
        Numbers(Numbers &&tmp);
        ~Numbers();

        void swap(Numbers &other);
        Numbers &operator=(Numbers const &other);
        Numbers &operator=(Numbers &&tmp);

        int &operator[](size_t index);
        int operator[](size_t index) const;
        
        Numbers &operator+=(Numbers const &rhs);
        Numbers &operator-=(Numbers const &rhs);
        Numbers &operator*=(int rhs);
        Numbers &operator/=(int rhs);
    
    private:
    	void add(Numbers const &other);
    	void sub(Numbers const &other);
    	void mult(int other);
    	void div(int other);

        bool const sameSize(Numbers const &other);
};

    

#endif 
