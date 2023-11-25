#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("abdo", 1);
        Bureaucrat b("bele", 151);
        std::cout << a << std::endl;
        a.increment();
        a.increment();
        a.increment();
        a.increment();
        std::cout << a.getName() << " grade " << a.getGrade() << std::endl;
        a.increment();
        std::cout << b.getName() << " grade " << b.getGrade() << std::endl;
        b.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}