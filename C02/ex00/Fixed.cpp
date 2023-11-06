#include "Fixed.hpp"

const int Fixed::bit_f = 8;

Fixed::Fixed()
{
    std::cout << "Default constructer is called" << std::endl;
    this->raw = 0;
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "copy constructer is called" << std::endl;
    *this = a;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->raw);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->raw = raw;
}

Fixed::~Fixed()
{
    std::cout << "destructer is called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &s)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = s.getRawBits();
    return *this;
}