#include "Point.hpp"

int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
Point a(5, 7),b(5, 3), c(9,4), point(5, 5);
if (bsp(a, b, c, point))
    std::cout << "the point is inside triangel" << std::endl;
else
    std::cout << "the point is note inside triangel" << std::endl;
    
return 0;
}