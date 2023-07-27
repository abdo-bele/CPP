#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this ->weapon = NULL;
}
HumanB::HumanB(std::string name, Weapon &wep)
{
	this->name = name;
	this->weapon = &wep;
}

HumanB::~HumanB()
{
}

void    HumanB::attack(void)
{
	std::cout << this->name << "   "<< this->weapon->getType() <<std::endl;
}

void    HumanB::setWeapon(Weapon &wep)
{
	this->weapon = &wep;
}