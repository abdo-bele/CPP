#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructer is called" << std::endl;
}

Dog::Dog(std::string Type)
{
    this->Type = Type;
    std::cout << "Dog Constructer is called" << std::endl;
}

Dog::Dog(const Dog &Dog)
{
    std::cout << "Dog Copy Constructer is called" << std::endl;
    *this = Dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    if (this != &dog)
        this->Type = dog.Type;
    std::cout << "Dog Copy assignment operator is called" << std::endl;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog Bark" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructer is called" << std::endl;
}
