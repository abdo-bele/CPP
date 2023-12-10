#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern
{

public:
    Intern();
    // Intern(std::string const Name, int _exec_it, int _sig_it);
    Intern(const Intern &other);
    Intern &operator=(const Intern &);
    ~Intern();
    AForm*    makeForm(const std::string &Fname, const std::string &target);

};


#endif