#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected :
    std::string name;
    int hit_points;
    int Energy_points;
    int Attack_damage;
public :
    ClapTrap();
    ClapTrap(ClapTrap &a);
    ClapTrap(std::string name);
    ClapTrap   &operator=(const ClapTrap &s);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getname(void);
    int get_attak_damage(void);
    int get_hit_points(void);
    int get_energy_points(void);

};


#endif