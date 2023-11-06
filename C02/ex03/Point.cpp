#include "Point.hpp"

Point::Point()
{
    this->x = 0;
    this->y = 0;
    std::cout << "point construter is called" << std::endl;
}

Point::Point(const float a, const float b)
{
    Fixed l(a);
    Fixed t(b);
    this->x = l;
    this->y = t;
    std::cout << "point construter is called" << std::endl;
}

Point::Point(const Point &c)
{
    *this = c;
    std::cout << "point copy construter is called" << std::endl;
}

Point::~Point()
{
    std::cout << "point destructer is called" << std::endl;
}

Point   &Point::operator=(const Point &s)
{
	this->x = s.x;
	this->y = s.y;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed Point::getx(void) const
{
	std::cout << "get x func is called" << std::endl;
	return (this->x);
}
void    Point::setx(float a)
{
	this->x = a;
	std::cout << "set x func is called" << std::endl;
}
Fixed Point::gety(void) const
{
	std::cout << "get y func is called" << std::endl;
	return (this->y);
}
void    Point::sety(float a)
{
	this->y = a;
	std::cout << "set y func is called" << std::endl;	
}
