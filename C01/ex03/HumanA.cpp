#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
		: name(name), weapon(weapon)
{
    std::cout << "Default constructer is called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "destructer is called" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType()<<std::endl;
}