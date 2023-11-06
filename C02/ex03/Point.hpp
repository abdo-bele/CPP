#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed x;
        Fixed y;
    public:
    Point();
    Point(const float x, const float y);
    Point(const Point &a);
    Fixed getx(void) const;
    void    setx(float a);
    Fixed gety(void) const;
    void    sety(float a);
    Point   &operator=(const Point &s);
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);



#endif