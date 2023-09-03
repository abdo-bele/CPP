#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructer is called" << std::endl;
    this->name = "name";
    this->Attack_damage = 20;
    this->Energy_points = 50;
    this->hit_points = 100;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructer is called" << std::endl;
    if (name.length() == 0)
    {
        std::cout << "ERROR" << std::endl;
        return ;
    }
    this->name = name;
    this->Attack_damage = 20;
    this->Energy_points = 50;
    this->hit_points = 100;
}

ScavTrap::ScavTrap(ScavTrap &a)
{
    std::cout << "ScavTrap copy constructer is called" << std::endl;
    *this = a;
}

ScavTrap   &ScavTrap::operator=(const ScavTrap &s)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &s)
        this->name = s.name;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructer is called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}