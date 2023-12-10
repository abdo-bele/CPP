#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main()
{
    try
    {
        Bureaucrat abdo("abdo", 4);
        AForm *obj = new PresidentialPardonForm("abdo");
        Intern a;
        a.makeForm("presidential pardon", "abdo");
        abdo.signForm(*obj);
        obj->execute(abdo);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    


}