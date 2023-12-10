#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("ShrubberyCreation", 0, 0), target("target")
{
    std::cout << "constructer called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm("ShrubberyCreation", 45, 72), target(target)
{
    std::cout << "constructer called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) :AForm("ShrubberyCreation", other.get_Exec_it(), other.get_Sign_it()), target(other.target)
{
    std::cout << "RobotomyRequestForm copy constructer called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "RobotomyRequestForm copy assignement operator called" << std::endl;
    if (this != &other)
        target = other.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "destructer called" << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() < this->get_Exec_it() && this->get_Sign() == true)
    {
        std::cout << "some drilling noises"<<std::endl;

        std::srand(time(0));
        int a = std::rand();
        if (a % 2)
            std::cout << this->target << " has been robotomized successfully" <<std::endl;
        else
            std::cout << this->target << " has been robotomized failed" <<std::endl;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}
