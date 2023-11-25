#ifndef AForm_HPP
#define AForm_HPP


#include <iostream>
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class AForm
{
private:
    const std::string Name;
    bool  _signed;
    int   _exec_it;
    int   _sign_it;

public:
    AForm();
    AForm(std::string const Name, int _exec_it, int _sig_it);
    AForm(const AForm &other);
    AForm &operator=(const AForm &);
    virtual ~AForm();

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
    void set_Sign_it(int);
    void set_Exec_it(int);
    void set_Sign(int);
    void    increment();
    void    decrement();
    void    beSigned(const Bureaucrat &a);
    virtual void    execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);


#endif