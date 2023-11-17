#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructer is called" << std::endl;
    this->Type = "Dog";
    this->obj = new Brain();
}

Dog::Dog(std::string Type)
{
    std::cout << "Dog Constructer is called" << std::endl;
    this->Type = Type;
    this->obj = new Brain();
}

Dog::Dog(const Dog &Dog)
{
    std::cout << "Dog Copy Constructer is called" << std::endl;
    *this = Dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog Copy assignment operator is called" << std::endl;
    if (this != &dog)
    {
        this->Type = dog.Type;
        if(this->obj)
            delete this->obj;
        this->obj = new Brain (*dog.obj);
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog Bark" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Default Destructer is called" << std::endl;
    delete this->obj;
}
