#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name; 
}

Zombie::~Zombie()
{

}

void    Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name )
{
	Zombie  *z1 = new Zombie(name);
	return (z1);
}

void randomChump( std::string name )
{
	Zombie  z1(name);
	z1.announce();
}