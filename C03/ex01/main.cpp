#include "ScavTrap.hpp"

int main()
{
    ScavTrap abdo("abdo");
    ScavTrap mohcin("mohcin");
    
    abdo.attack("ahmed");
    mohcin.takeDamage(12);
    abdo.takeDamage(12);
    abdo.beRepaired(1);
    abdo.GuardGate();
}