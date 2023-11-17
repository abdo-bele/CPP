#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructer is called" << std::endl;
    ClapTrap::name= "defult_clap_name";
    this->name = "default";
    this->Energy_points = 50;
    this->Attack_damage = 30;
    this->Hit_points = 100;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap constructer is called" << std::endl;
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->Energy_points = 50;
    this->Attack_damage = 30;
    this->Hit_points = 100;
}

DiamondTrap::DiamondTrap(DiamondTrap &a)
{
    std::cout << "DiamondTrap copy constructer is called" << std::endl;
    *this = a;
}


DiamondTrap   &DiamondTrap::operator=(const DiamondTrap &s)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this != &s)
    {
        this->name = s.name;
        this->Energy_points = s.Energy_points;
        this->Attack_damage = s.Attack_damage;
        this->Hit_points = s.Hit_points;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructer is called" << std::endl;
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << this->name << " and ClapTrap name is " << ClapTrap::name << std::endl;
}