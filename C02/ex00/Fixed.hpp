#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int raw;
    static const int bit_f;
    
public:
    Fixed();
    Fixed(const Fixed &a);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed   &operator=(const Fixed &s);

};




#endif