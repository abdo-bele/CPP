#include "PmergeMe.hpp"

bool    ft_check_obj(const char *obj)
{
    size_t a = 0;
    if(obj)
        a = strlen(obj);
    for (size_t i = 0; i < a; i++)
    {
        if (!isdigit(obj[i]))
            throw std::runtime_error("Number error");
    }
    if (a == 0)
        throw std::runtime_error("Number error");
    return true;
}

int main(int ac , char **av)
{
    if(ac >= 2)
    {
        try
        {
            int i = 1;
            std::string obj;
            while (i < ac && ft_check_obj(av[i]))
            {
                obj += av[i++];
                obj += " ";
            }
            ft_sort(obj);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
        std::cout << "ARGUMENTS ERROR" << std::endl;
}