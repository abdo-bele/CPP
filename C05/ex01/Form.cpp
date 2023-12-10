#include "Form.hpp"

Form::Form() : Name("name") , _sign_it(0), _exec_it(0)
{
    std::cout << "default constructer called" << std::endl;
    _signed = false;
}

Form::Form(std::string const name, int _exec_it, int _sign_it): Name(name) , _sign_it(_sign_it), _exec_it(_exec_it)
{
    std::cout << "constructer called" << std::endl;
    if (_exec_it < 1)
        throw GradeTooHighException();
    if (_sign_it < 1)
        throw GradeTooHighException();
    if (_exec_it > 150)
        throw GradeTooLowException();
    if (_sign_it > 150)
        throw GradeTooLowException();
    _signed = false;
}

Form::Form(const Form &other) : Name(other.Name), _sign_it(other._sign_it), _exec_it(other._exec_it)
{
    std::cout << "Form copy constructer called" << std::endl;
    if (this != &other)
    {
        this->_signed = false;
    }
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Form copy assignement operator called" << std::endl;
    if (this != &other)
    {
        this->_signed = false;
    }
    return (*this);
}

Form::~Form()
{
    std::cout << "destructer called" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form to high");
}
const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form to low");
}

std::string Form::getName() const
{
    return this->Name;
}

int Form::get_Sign_it() const
{
    return this->_sign_it;
}

int Form::get_Exec_it() const
{
    return this->_exec_it;
}

int Form::get_Sign() const
{
    return this->_signed;
}

void    Form::beSigned(const Bureaucrat &a)
{
    if (a.getGrade() <= this->_sign_it)
        this->_signed = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
    out << obj.getName() << ", Form signe " << obj.get_Sign() << " , exec" << obj.get_Exec_it() << " , sign" << obj.get_Sign_it();
    return out;
}
