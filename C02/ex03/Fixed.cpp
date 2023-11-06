#include "Fixed.hpp"

const int Fixed::bit_f = 8;

Fixed::Fixed()
{
    this->i = 0;
    std::cout << "Default constructer is called" << std::endl;
}

Fixed::Fixed(const int a)
{
    std::cout << "Int constructer is called" << std::endl;
    this->i = a << this->bit_f;
}
Fixed::Fixed(const float a)

{
    std::cout << "float constructer is called" << std::endl;
    this->i = roundf(a *(1 << this->bit_f));
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "copy constructer is called" << std::endl;
    *this = a;
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
    this->i = s.i;
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
    a = ((int)this->i >> this->bit_f);
    return (a);
}

std::ostream& operator<<(std::ostream &out, const Fixed &a)
{   
        out << a.toFloat();
        return out;
}

bool Fixed::operator==(const Fixed &b) const {
    return (this->toFloat() == b.toFloat());
}

bool Fixed::operator!=(const Fixed &b) const {
    return !(this->toFloat() == b.toFloat());
}

bool Fixed::operator<(const Fixed &b) const {
    return this->toFloat() < b.toFloat();
}

bool Fixed::operator<=(const Fixed &b) const {
    return !(b.toFloat() < this->toFloat());
}

bool Fixed::operator>(const Fixed &b) const {
    return b.toFloat() < this->toFloat();
}

bool Fixed::operator>=(const Fixed &b) const {
    return !(this->toFloat() < b.toFloat());
}

Fixed Fixed::operator*(const Fixed &b) const
{
    return Fixed(this->toFloat() * b.toFloat());
}

Fixed Fixed::operator+(const Fixed &b) const
{
    return Fixed(this->toFloat() + b.toFloat());
}

Fixed & Fixed::operator++()
{
    this->i += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed a(*this);

    this->i++;
    return (a);
}

Fixed Fixed::operator-(const Fixed &b) const
{
    return Fixed(this->toFloat() - b.toFloat());
}

Fixed &Fixed::operator--()
{
    this->i -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed l(*this);
    this->i--;
    return (l);
}

Fixed Fixed::operator/(const Fixed &b) const
{
    return Fixed(this->toFloat() / b.toFloat());
}

const Fixed   &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    else
        return (b);
}

Fixed   &Fixed::min( Fixed &a,  Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    else
        return (b);
}

const Fixed   &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    else
        return (b);
}

Fixed   &Fixed::max( Fixed &a,  Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    else
        return (b);
}
