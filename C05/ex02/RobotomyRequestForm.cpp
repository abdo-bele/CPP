#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): target(target)
{
    std::cout << "constructer called" << std::endl;
    this->set_Exec_it(45);
    this->set_Sign_it(72);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : target(other.target)
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
        std::cout << "wach abana \n" << "grrrrrrrrrrrrrrr\n"<<std::endl;

        int a = rand();
        if (a % 2)
            std::cout << this->target << " has been robotomized successfully" <<std::endl;
        else
            std::cout << this->target << " has been robotomized failed" <<std::endl;
    }
    else
        throw Bureaucrat::GradeTooLowException();
}