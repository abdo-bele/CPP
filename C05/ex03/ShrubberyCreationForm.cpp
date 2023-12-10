#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 0, 0), target("target")
{
    std::cout << "constructer called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreation", 137, 145), target(target)
{
    std::cout << "constructer called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :AForm("ShrubberyCreation", other.get_Exec_it(), other.get_Sign_it()), target(other.target)
{
    std::cout << "ShrubberyCreationForm copy constructer called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "ShrubberyCreationForm copy assignement operator called" << std::endl;
    if (this != &other)
        target = other.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "destructer called" << std::endl;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() < this->get_Exec_it() && this->get_Sign() == true)
    {
        std::string name = this->target + "_shrubbery";
        std::ofstream outfile(name);

        outfile << "       _-_\n";
        outfile << "    /~~   ~~\\\n";
        outfile << " /~~         ~~\\\n";
        outfile << "{               }\n";
        outfile << " \\  _-     -_  /\n";
        outfile << "   ~  \\\\ //  ~\n";
        outfile << "_- -   | | _- _\n";
        outfile << "  _ -  | |   -_\n";
        outfile << "      // \\\n";
        outfile.close();
    }
    else if(executor.getGrade() >=  this->get_Exec_it())
        throw Bureaucrat::GradeTooLowException();
}