#include "Fixed.hpp"

Fixed::Fixed()
{
    this->i = 0;
    std::cout << "Default constructer is called" << std::endl;
}

Fixed::Fixed(const int a)
{
    std::cout << "Int constructer is called" << std::endl;
    this->i = roundf(a *(1 << this->bit_f));
}
Fixed::Fixed(const float a)

{
    std::cout << "float constructer is called" << std::endl;
    this->i = roundf(a *(1 << this->bit_f));
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "copy constructer is called" << std::endl;
    this->operator=(a);
}

int Fixed::getRawBits( void )
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->i);
}

void Fixed::setRawBits( int const raw )
{
    this->i = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "destructer is called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &s)
{
    i = s.i;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

float Fixed::toFloat( void ) const
{
    float a;
    a = ((float)this->i / (float)(1 << this->bit_f));
    return (a);
}

int Fixed::toInt( void ) const
{
    int a;
    a = ((float)this->i / (float)(1 << this->bit_f));
    return (a);
}

std::ostream& operator<<(std::ostream &out, const Fixed &a)
{   
        out << a.toFloat();
        return out;
}