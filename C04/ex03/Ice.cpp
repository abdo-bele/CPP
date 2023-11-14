#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
    std::cout << "Ice default constructer called" << std::endl;
}

Ice::Ice(std::string const &type)
{
    this->type = type;
    std::cout << "Ice  constructer called" << std::endl;
}

Ice::Ice(const Ice &other)
{
    *this = other;
    std::cout << "Ice copy constructer called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout << "Ice copy assignement operator called" << std::endl;
    return (*this);
}

Ice    *Ice::clone()const 
{
    Ice *obj = new Ice(*this);
    return obj;
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<" *" <<std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice default destructer called" << std::endl;
}
