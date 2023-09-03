#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructer is called" << std::endl;
    this->name = "name";
    this->Attack_damage = 20;
    this->Energy_points = 50;
    this->hit_points = 100;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructer is called" << std::endl;
    this->name = name;
    this->Attack_damage = 20;
    this->Energy_points = 50;
    this->hit_points = 100;
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
        this->name = s.name;
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