#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructer is called" << std::endl;
    this->name = "FragTrap";
    this->Attack_damage = 30;
    this->Energy_points = 100;
    this->Hit_points = 100;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructer is called" << std::endl;
    this->name = name;
    this->Attack_damage = 30;
    this->Energy_points = 100;
    this->Hit_points = 100;
}

FragTrap::FragTrap(FragTrap &a)
{
    std::cout << "FragTrap copy constructer is called" << std::endl;
    *this = a;
}

FragTrap   &FragTrap::operator=(const FragTrap &s)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &s)
    {
        this->name = s.name;
        this->Attack_damage = s.Attack_damage;
        this->Energy_points = s.Energy_points;
        this->Hit_points = s.Hit_points;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructer is called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "HIGH FIVE GUYS" << std::endl;
}