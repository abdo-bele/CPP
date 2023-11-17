#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap abdo("abdo");
    DiamondTrap mohcin("mohcin");
    
    abdo.attack("ahmed");
    mohcin.takeDamage(12);
    abdo.takeDamage(12);
    abdo.beRepaired(1);
    abdo.highFivesGuys();
    abdo.guardGate();
}