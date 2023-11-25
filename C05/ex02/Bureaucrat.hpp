#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include "AForm.hpp"
class AForm;

class Bureaucrat
{
private:
    const std::string Name;
    int grade;

public:
    Bureaucrat(std::string const Name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(const Bureaucrat &);
    ~Bureaucrat();

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
    int getGrade() const;
    void    increment();
    void    decrement();
    void    executeForm(AForm const & form);
    void    signForm(AForm &obj);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);


#endif