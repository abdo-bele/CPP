#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this ->weapon = NULL;
	std::cout << "Default constructer is called" << std::endl;
}
HumanB::HumanB(std::string name, Weapon &wep)
{
	this->name = name;
	this->weapon = &wep;
	std::cout << "Default constructer is called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "destructer is called" << std::endl;
}

void    HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their "<< this->weapon->getType() <<std::endl;
}

void    HumanB::setWeapon(Weapon &wep)
{
	this->weapon = &wep;
}