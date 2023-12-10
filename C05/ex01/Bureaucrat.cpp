#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade): Name(name)
{
    std::cout << "constructer called" << std::endl;
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : Name(other.Name)
{
    std::cout << "Bureaucrat copy constructer called" << std::endl;
    if (this != &other)
        this->grade = other.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Bureaucrat copy assignement operator called" << std::endl;
    if (this != &other)
        this->grade = other.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "destructer called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat to high");
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat to low");
}

std::string Bureaucrat::getName() const
{
    return this->Name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void    Bureaucrat::increment()
{
    if (this->grade > 1)
        this->grade--;
    else
        throw GradeTooHighException();
}

void    Bureaucrat::decrement()
{
    if (this->grade < 150)
        this->grade++;
    else
        throw GradeTooLowException();
}

void    Bureaucrat::signForm(Form &obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout << this->Name <<  " signed " << obj.getName() <<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->Name <<  " couldn’t sign " << obj.getName() << " because " << e.what()<<std::endl; 
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << " , bureaucrat grade " << obj.getGrade();
    return out;
}