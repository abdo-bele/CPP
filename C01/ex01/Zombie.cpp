#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{

}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

void    Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name )
{
	Zombie  *z1 = new Zombie();
	z1->set_name(name);
	return (z1);
}

void randomChump( std::string name )
{
	Zombie  z1;
	z1.set_name(name);
	z1.announce();
}