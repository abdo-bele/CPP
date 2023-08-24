#include "Fixed.hpp"

Fixed::Fixed()
{
    this->i = 0;
    std::cout << "Default constructer is called" << std::endl;
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