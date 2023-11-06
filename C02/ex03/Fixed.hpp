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
    bool operator>=(const Fixed &b) const;
    bool operator>(const Fixed &b) const;
    bool operator<=(const Fixed &b) const;
    bool operator==(const Fixed &b) const;
    bool operator!=(const Fixed &b) const;
    bool operator<(const Fixed &b) const;
    Fixed operator*(const Fixed &b) const;
    Fixed operator+(const Fixed &b) const;
    Fixed &operator++();
    Fixed operator++(int);
    Fixed operator-(const Fixed &b) const;
    Fixed &operator--();
    Fixed operator--(int);
    Fixed operator/(const Fixed &b) const;
    static const Fixed   &min(const Fixed& lhs, const Fixed& rhs);
    static Fixed   &min( Fixed &a,  Fixed &b);
    static const Fixed   &max(const Fixed& lhs, const Fixed& rhs);
    static Fixed   &max( Fixed &a,  Fixed &b);
};
    std::ostream &operator<<(std::ostream &out, const Fixed &a);




#endif