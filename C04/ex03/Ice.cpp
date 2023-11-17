#include "Ice.hpp"

Ice::Ice()
{
    // std::cout << "Ice default constructer called" << std::endl;
    this->type = "ice";
}

Ice::Ice(std::string const &type)
{
    // std::cout << "Ice  constructer called" << std::endl;
    this->type = type;
}

Ice::Ice(const Ice &other)
{
    // std::cout << "Ice copy constructer called" << std::endl;
    *this = other;
}

Ice &Ice::operator=(const Ice &obj)
{
    // std::cout << "Ice copy assignement operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
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
    // std::cout << "Ice default destructer called" << std::endl;
}
