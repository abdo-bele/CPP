#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include <iostream>
#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;

    public:
        PresidentialPardonForm(std::string const &);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &);
        ~PresidentialPardonForm();

        void    execute(Bureaucrat const & executor) const;
};




#endif