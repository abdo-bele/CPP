#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("abdo", 1);
        Bureaucrat b("bele", 12);
        std::cout << a << std::endl;
        a.decrement();
        a.decrement();
        a.decrement();
        a.decrement();
        std::cout << a.getName() << " grade " << a.getGrade() << std::endl;
        a.decrement();
        std::cout << b.getName() << " grade " << b.getGrade() << std::endl;
        b.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "===============================>\n";

    try
    {
        Bureaucrat e("abdo", 150);
        std::cout<< e << std::endl;

        e.decrement();
        std::cout<< e << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}