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

Fixed abso (Fixed a)
{
	Fixed b;
	if (a.toFloat() < 0)
	{
		b.setRawBits(a.getRawBits() * -1);
		return (b);
	}
	else
		b = a;
	return (b);
}

Fixed area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
	Fixed l(2);
   return abso((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/l);
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

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed d(area(a.getx(), a.gety(), b.getx(), b.gety(), c.getx(), c.gety()));
	Fixed e(area(a.getx(), a.gety(), b.getx(), b.gety(), point.getx(), point.gety()));
	Fixed f(area(a.getx(), a.gety(), point.getx(), point.gety(), c.getx(), c.gety()));
	Fixed l(area(point.getx(), point.gety(), b.getx(), b.gety(), c.getx(), c.gety()));

	Fixed sum;
	sum = e + f + l;

	if (e == 0 || f == 0 || l == 0)
		return (false);
	if (sum == d)
		return (true);
	return (false);
}