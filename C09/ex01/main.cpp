#include "RPN.hpp"

int main(int ac , char **av)
{

    try
    {
        if(ac == 2)
        {
            std::string obj = av[1];
            Rpn_calculator(obj);
        }
        else
            std::cout << "Error" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}