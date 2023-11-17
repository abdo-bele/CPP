#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructer is called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string Type)
{
    this->Type = Type;
    std::cout << "WrongAnimal Constructer is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal Copy Constructer is called" << std::endl;
    *this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
    if (this != &WrongAnimal)
        this->Type = WrongAnimal.Type;
    std::cout << "WrongAnimal Copy assignment operator is called" << std::endl;
    return (*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Make Sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Default Destructer is called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->Type);
}

void    WrongAnimal::setType (std::string Type)
{
    this->Type = Type;
}