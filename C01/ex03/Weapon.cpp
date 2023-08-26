#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Default constructer is called" << std::endl;
}

Weapon::Weapon(std::string type)
	: type(type)
{
    std::cout << "Default constructer is called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "destructer is called" << std::endl;
}

void    Weapon::setType(std::string type)
{
 	this->type = type;
	
}

std::string	Weapon::getType(void)
{
	return (this->type);
}