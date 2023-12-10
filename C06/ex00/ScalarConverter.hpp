#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>
#include <iomanip>

class ScalarConverter
{
private:
    ScalarConverter();
public:
    ~ScalarConverter();
    static void convert(std::string &);
};



#endif