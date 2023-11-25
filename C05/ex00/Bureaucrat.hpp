#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
private:
    const std::string Name;
    int grade;

public:
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &);
    ~Bureaucrat();
    Bureaucrat();

public:
    Bureaucrat(std::string const Name, int grade);
    class GradeTooHighException : public std::exception
    {
        public :
            const char* what() const throw();
            // std::terminate
    };

    class GradeTooLowException : public std::exception
    {
        public :
            const char* what() const throw();
    };
    std::string getName() const;
    int getGrade() const;
    void    increment();
    void    decrement();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);


#endif