#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("abdo", 5);
        Bureaucrat b("bele", 150);
        Form f("fff", 15, 5);
        f.beSigned(a);
        std::cout <<f.get_Sign() << std::endl;
        b.signForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}