#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *z1 = new Zombie[N];

	int i = 0;
	while(i < N)
	{
		z1[i].set_name(name);
		i++;
	}
	return(z1);
}