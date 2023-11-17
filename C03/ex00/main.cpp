#include "ClapTrap.hpp"

int main()
{
    ClapTrap abdo("abdo");
    ClapTrap mohcin("mohcin");
    
    abdo.attack(mohcin.get_Name());
    mohcin.takeDamage(abdo.get_Attak_damage());
    abdo.beRepaired(90);
}