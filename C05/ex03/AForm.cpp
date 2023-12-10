#include "AForm.hpp"

AForm::AForm() : Name("name") , _sign_it(0), _exec_it(0)
{
    std::cout << "default constructer called" << std::endl;
    _signed = false;
}

AForm::AForm(std::string const name, int _exec_it, int _sign_it): Name(name) , _sign_it(_sign_it), _exec_it(_exec_it)
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

AForm::AForm(const AForm &other) : Name(other.Name), _sign_it(other._sign_it), _exec_it(other._exec_it)
{
    std::cout << "AForm copy constructer called" << std::endl;
    if (this != &other)
    {
        this->_signed = false;
    }
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "AForm copy assignement operator called" << std::endl;
    if (this != &other)
    {
        this->_signed = false;
    }
    return (*this);
}

AForm::~AForm()
{
    std::cout << "destructer called" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("AForm to high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("AForm to low");
}

std::string AForm::getName() const
{
    return this->Name;
}

int AForm::get_Sign_it() const
{
    return this->_sign_it;
}

int AForm::get_Exec_it() const
{
    return this->_exec_it;
}

int AForm::get_Sign() const
{
    return this->_signed;
}


void    AForm::beSigned(const Bureaucrat &a)
{
    if (a.getGrade() <= this->_sign_it)
        this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &obj)
{
    out << obj.getName() << " , AForm signe " << obj.get_Sign() << " , exec" << obj.get_Exec_it() << " , sign" << obj.get_Sign_it() << std::endl;
    return out;
}
