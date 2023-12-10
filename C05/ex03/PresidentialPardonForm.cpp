#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("ShrubberyCreation", 0, 0), target("target")
{
    std::cout << "default constructer called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm("ShrubberyCreation", 5, 25), target(target)
{
    std::cout << "constructer called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)  :AForm("ShrubberyCreation", other.get_Exec_it(), other.get_Sign_it()), target(other.target)
{
    std::cout << "PresidentialPardonForm copy constructer called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "PresidentialPardonForm copy assignement operator called" << std::endl;
    if (this != &other)
        target = other.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "destructer called" << std::endl;
}


void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() < this->get_Exec_it() && this->get_Sign() == true)
    {
        std::cout << this->target <<" has been pardoned by Zaphod Beeblebrox"<<std::endl;
    }
    else if(executor.getGrade() >=  this->get_Exec_it())
        throw Bureaucrat::GradeTooLowException();
}