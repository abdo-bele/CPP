#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int i;
    static const int bit_f = 8;
    
public:
    Fixed();
    Fixed(const Fixed &a);
    Fixed   &operator=(const Fixed &s);

    ~Fixed();
    int getRawBits( void );
    void setRawBits( int const raw );
};




#endif