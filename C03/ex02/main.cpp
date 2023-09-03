#include "FragTrap.hpp"

int main()
{
    FragTrap abdo("abdo");
    FragTrap mohcin("mohcin");
    
    abdo.attack("ahmed");
    mohcin.takeDamage(12);
    abdo.takeDamage(12);
    abdo.beRepaired(1);
    abdo.highFivesGuys();
}