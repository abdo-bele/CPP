#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
    std::cout << "Cure default constructer called" << std::endl;
}

Cure::Cure(std::string const &type)
{
    this->type = type;
    std::cout << "Cure  constructer called" << std::endl;
}

Cure::Cure(const Cure &other)
{
    *this = other;
    std::cout << "Cure copy constructer called" << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout << "Cure copy assignement operator called" << std::endl;
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
    std::cout << "Cure default destructer called" << std::endl;
}
