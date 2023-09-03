#include "ClapTrap.hpp"

int main()
{
    std::string name = "abdo";
    ClapTrap abdo(name);
    ClapTrap mohcin = abdo;
    
    // abdo.attack(mohcin.getname());
    // mohcin.takeDamage(abdo.get_attak_damage());
    // abdo.beRepaired(90);
    std::cout << mohcin.getname() << std::endl;
}