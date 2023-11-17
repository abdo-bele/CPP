#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructer is called" << std::endl;
}
Animal::Animal(std::string Type)
{
    std::cout << "Animal Constructer is called" << std::endl;
    this->Type = Type;
}

Animal::Animal(const Animal &Animal)
{
    std::cout << "Animal Copy Constructer is called" << std::endl;
    *this = Animal;
}

Animal &Animal::operator=(const Animal &Animal)
{
    std::cout << "Animal Copy assignment operator is called" << std::endl;
    if (this != &Animal)
        this->Type = Animal.Type;
    return (*this);
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal Make Sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Default Destructer is called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->Type);
}

void    Animal::setType (std::string Type)
{
    this->Type = Type;
}