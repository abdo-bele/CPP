#include "Zombie.hpp"

void my()
{
    system("leaks Zombie");
}

int main()
{
    // atexit(my);
    Zombie  *zom;

    // zom = newZombie("bele");
    // zom->announce();
    // delete zom;

    zom = zombieHorde(-1, "abdo");
    if (!zom)
        return 0;
    int i =0;
    while (i < 3)
    {
        zom[i].announce();
        i++;
    }
    delete[] zom;
    // randomChump("aarchtou");
    return (0);
}
