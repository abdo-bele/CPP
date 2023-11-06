#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
private:
    int i;
    static const int bit_f;
    
public:
    Fixed();
    Fixed(const int a);
    Fixed(const float a);
    Fixed(const Fixed &a);
    ~Fixed();
    Fixed   &operator=(const Fixed &s);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void );
    void setRawBits( int const raw );
};
    std::ostream &operator<<(std::ostream &out, const Fixed &a);



#endif