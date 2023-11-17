#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructer is called" << std::endl;
    this->name = "ScavTrap";
    this->Attack_damage = 20;
    this->Energy_points = 50;
    this->Hit_points = 100;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructer is called" << std::endl;
    this->name = name;
    this->Attack_damage = 20;
    this->Energy_points = 50;
    this->Hit_points = 100;
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
    {
        this->name = s.name;
        this->Attack_damage = s.Attack_damage;
        this->Energy_points = s.Energy_points;
        this->Hit_points = s.Hit_points;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructer is called" << std::endl;
}

void    ScavTrap::GuardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

void    ScavTrap::attack(std::string target)
{
    if (this->Energy_points <= 0)
    {
        std::cout <<  "ScavTrap " << this->name << " can’t do anything" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacks " <<target << " , causing " << this->Attack_damage <<" points of damage!" << std::endl;
    this->Energy_points--;
}