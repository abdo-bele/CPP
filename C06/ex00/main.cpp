#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    
    if(ac == 2)
    {
        std::string a = av[1];
        ScalarConverter::convert(a);
    }
    exit(0);
    std::string a  = "19.0";

    double b;

    std::stringstream t(a);
    t >> b;

    std::cout << b << std::endl;
}