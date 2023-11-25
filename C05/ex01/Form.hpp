#ifndef FORM_HPP
#define FORM_HPP


#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string Name;
    bool  _signed;
    int   _exec_it;
    int   _sign_it;

public:
    Form(); //!!!
    Form(std::string const Name, int _exec_it, int _sig_it);
    Form(const Form &other);
    Form &operator=(const Form &);
    ~Form();

public:
    class GradeTooHighException : public std::exception
    {
        public :
            const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public :
            const char* what() const throw();
    };
    std::string getName() const;
    int get_Sign_it() const;
    int get_Exec_it() const;
    int get_Sign() const;
    void    increment();
    void    decrement();
    void    beSigned(const Bureaucrat &a);
};

std::ostream &operator<<(std::ostream &out, const Form &obj);


#endif