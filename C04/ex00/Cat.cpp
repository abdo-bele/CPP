#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructer is called" << std::endl;
}

Cat::Cat(std::string Type)
{
    this->Type = Type;
    std::cout << "Cat Constructer is called" << std::endl;
}

Cat::Cat(const Cat &Cat)
{
    std::cout << "Cat Copy Constructer is called" << std::endl;
    *this = Cat;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat Copy assignment operator is called" << std::endl;
    if (this != &cat)
        this->Type = cat.Type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Myaw Myaw" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructer is called" << std::endl;
}
