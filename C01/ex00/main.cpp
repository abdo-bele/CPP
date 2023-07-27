#include "Zombie.hpp"

int main()
{
    Zombie  *zom;

    zom = newZombie("bele");
    zom->announce();
    delete zom;

    randomChump("aarchtou");
    return (0);
}