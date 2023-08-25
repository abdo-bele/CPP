#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
private:
    int i;
    static const int bit_f = 8;
    
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
    friend bool operator>=(const Fixed &a, const Fixed &b);
    friend bool operator>(const Fixed &a, const Fixed &b);
    friend bool operator<(const Fixed &a, const Fixed &b);
    friend bool operator<=(const Fixed &a, const Fixed &b);
    friend bool operator==(const Fixed &a, const Fixed &b);
    friend bool operator!=(const Fixed &a, const Fixed &b);
    friend bool operator<(const Fixed &a, const Fixed &b);
    friend float operator*(const Fixed &a, const Fixed &b);
    friend float operator+(const Fixed &a, const Fixed &b);
    friend float operator++(Fixed &a);
    friend float operator++(Fixed &a, int i);
    friend float operator-(const Fixed &a, const Fixed &b);
    friend float operator--(Fixed &a);
    friend float operator--(Fixed &a, int i);
    friend float operator/(const Fixed &a, const Fixed &b);
    friend float operator%(const Fixed &a, const Fixed &b);
    friend std::ostream &operator<<(std::ostream &out, const Fixed &a);
    static const Fixed   &min(const Fixed& lhs, const Fixed& rhs);
    static Fixed   &min( Fixed &a,  Fixed &b);
    static const Fixed   &max(const Fixed& lhs, const Fixed& rhs);
    static Fixed   &max( Fixed &a,  Fixed &b);
};




#endif