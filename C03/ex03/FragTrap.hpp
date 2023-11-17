#ifndef  FragTrap_HPP
#define  FragTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class  FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap &a);
    FragTrap   &operator=(const FragTrap &s);
    ~ FragTrap();
    void highFivesGuys(void);
};


#endif