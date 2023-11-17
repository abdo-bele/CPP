#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructer is called" << std::endl;
}

WrongCat::WrongCat(std::string Type)
{
    this->Type = Type;
    std::cout << "WrongCat Constructer is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
    std::cout << "WrongCat Copy Constructer is called" << std::endl;
    *this = WrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCat)
{
    if (this != &WrongCat)
    this->Type = WrongCat.Type;
    std::cout << "WrongCat Copy assignment operator is called" << std::endl;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Myaw Myaw" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Default Destructer is called" << std::endl;
}
