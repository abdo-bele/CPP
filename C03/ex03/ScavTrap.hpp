#ifndef  ScavTrap_HPP
#define  ScavTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class  ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &a);
        ScavTrap   &operator=(const ScavTrap &s);
        ~ ScavTrap();
        void guardGate();
        void attack(const std::string &target);
};


#endif