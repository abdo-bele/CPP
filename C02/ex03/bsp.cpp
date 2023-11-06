#include "Point.hpp"

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