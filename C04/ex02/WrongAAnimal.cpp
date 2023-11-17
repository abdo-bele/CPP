#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal()
{
    std::cout << "WrongAAnimal Default Constructer is called" << std::endl;
}
WrongAAnimal::WrongAAnimal(std::string Type)
{
    this->Type = Type;
    std::cout << "WrongAAnimal Constructer is called" << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal &WrongAAnimal)
{
    std::cout << "WrongAAnimal Copy Constructer is called" << std::endl;
    *this = WrongAAnimal;
}

WrongAAnimal &WrongAAnimal::operator=(const WrongAAnimal &WrongAAnimal)
{
    if (this != &WrongAAnimal)
        this->Type = WrongAAnimal.Type;
    std::cout << "WrongAAnimal Copy assignment operator is called" << std::endl;
    return (*this);
}

void    WrongAAnimal::makeSound(void) const
{
    std::cout << "WrongAAnimal Make Sound" << std::endl;
}

WrongAAnimal::~WrongAAnimal()
{
    std::cout << "WrongAAnimal Default Destructer is called" << std::endl;
}

std::string WrongAAnimal::getType(void) const
{
    return (this->Type);
}

void    WrongAAnimal::setType (std::string Type)
{
    this->Type = Type;
}