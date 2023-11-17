#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal Default Constructer is called" << std::endl;
}
AAnimal::AAnimal(std::string Type)
{
    this->Type = Type;
    std::cout << "AAnimal Constructer is called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
    std::cout << "AAnimal Copy Constructer is called" << std::endl;
    *this = animal;
}

AAnimal &AAnimal::operator=(const AAnimal &animal)
{
    if (this != &animal)
        this->Type = animal.Type;
    std::cout << "AAnimal Copy assignment operator is called" << std::endl;
    return (*this);
}

void    AAnimal::makeSound(void) const
{
    std::cout << "AAnimal Make Sound" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Default Destructer is called" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return (this->Type);
}

void    AAnimal::setType (std::string Type)
{
    this->Type = Type;
}