#include "Cure.hpp"

Cure::Cure()
{
    // std::cout << "Cure default constructer called" << std::endl;
    this->type = "cure";
}

Cure::Cure(std::string const &type)
{
    // std::cout << "Cure constructer called" << std::endl;
    this->type = type;
}

Cure::Cure(const Cure &other)
{
    // std::cout << "Cure copy constructer called" << std::endl;
    *this = other;
}

Cure &Cure::operator=(const Cure &obj)
{
    // std::cout << "Cure copy assignement operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

Cure    *Cure::clone()const 
{
    Cure *obj = new Cure(*this);
    return obj;
}

void Cure::use(ICharacter &target)
{
    std::cout <<"* heals "<< target.getName() <<"’s wounds *" << std::endl;
}

Cure::~Cure()
{
    // std::cout << "Cure default destructer called" << std::endl;
}
