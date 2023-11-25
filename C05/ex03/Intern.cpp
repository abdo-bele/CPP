#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "default constructer called" << std::endl;
}

Intern::Intern(const Intern &other)
{
    std::cout << "Intern copy constructer called" << std::endl;
    if (this != &other)
    {
    }
}

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Intern copy assignement operator called" << std::endl;
    if (this != &other)
    {
    }
    return (*this);
}

const char * Intern::FormNotExiste::what() const throw()
{
    return "this form doesn't exist";
}

Intern::~Intern()
{
    std::cout << "destructer called" << std::endl;
}

AForm * Intern::makeForm(std::string &Fname, std::string &target)
{
    std::string a[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    int i;
    for (i = 0; i < 3; i++)
    {
        if (Fname == a[i])
            break;
    }
    switch (i)
    {
        case 0:
            std::cout << "Intern creats" << Fname << std::endl;
            return new RobotomyRequestForm(target);
        case 1:
            std::cout << "Intern creats" << Fname << std::endl;
            return new PresidentialPardonForm(target);
        case 2:
            std::cout << "Intern creats" << Fname << std::endl;
            return new ShrubberyCreationForm(target);
        default:
            throw ::Intern::FormNotExiste();
    }
}
