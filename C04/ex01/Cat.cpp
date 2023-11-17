#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructer is called" << std::endl;
    this->Type = "Cat";
    this->obj = new Brain();
}

Cat::Cat(std::string Type)
{
    std::cout << "Cat Constructer is called" << std::endl;
    this->Type = Type;
    this->obj = new Brain();
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
    {
        this->Type = cat.Type;
        if(this->obj)
            delete this->obj;
        this->obj = new Brain (*cat.obj);
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Myaw Myaw" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructer is called" << std::endl;
    delete this->obj;
}
