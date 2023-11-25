#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP


#include <iostream>
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const &Name);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
        ~ShrubberyCreationForm();
    
        void    execute(Bureaucrat const & executor) const;
};


#endif