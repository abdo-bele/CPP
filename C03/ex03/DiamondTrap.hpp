#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string);
        DiamondTrap(DiamondTrap &a);
        DiamondTrap   &operator=(const DiamondTrap &s);
        void    attack(const std::string &target);
        void    whoAmI();
};



#endif