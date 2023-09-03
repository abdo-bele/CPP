#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "Default constructer is called" << std::endl;
	this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " destructer is called" << std::endl;
}

void    Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
