#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
	Weapon		*weapon;
public:
    HumanB(std::string name);
    HumanB(std::string name, Weapon &wep);
    ~HumanB();
    std::string get_name();
    void    setWeapon(Weapon &wep);
    void    attack();
};


#endif