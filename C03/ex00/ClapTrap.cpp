#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructer is called" << std::endl;
    this->name = "ClapTrap";
    this->Attack_damage = 0;
    this->Energy_points = 10;
    this->Hit_points = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "constructer is called" << std::endl;
    this->name = name;
    this->Attack_damage = 0;
    this->Energy_points = 10;
    this->Hit_points = 10;
}

ClapTrap::ClapTrap(ClapTrap &a)
{
    std::cout << "copy constructer is called" << std::endl;
    *this = a;
}

ClapTrap   &ClapTrap::operator=(const ClapTrap &s)
{
    this->Attack_damage = s.Attack_damage;
    this->Energy_points = s.Energy_points;
    this->Hit_points = s.Hit_points;
    this->name = s.name;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructer is called" << std::endl;
}


void    ClapTrap::attack(const std::string &target)
{
    if (this->Energy_points <= 0 || this->Hit_points <= 0)
    {
        std::cout <<  "ClapTrap " << this->name << " can’t do anything" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " <<target << " , causing " << this->Attack_damage <<" points of damage!" << std::endl;
    this->Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit_points <= 0)
    {
        std::cout <<  "ClapTrap " << this->name << " can’t do anything" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " TakeDamage" << std::endl;
    this->Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount + this->Hit_points > 100)
    {
        std::cout <<  "ClapTrap " << this->name << " can’t exceeds 100 hit points" << std::endl;
        return ;
    }
    else if (this->Energy_points <= 0)
    {
        std::cout <<  "ClapTrap " << this->name << " can’t do anything" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " Repair itself" << std::endl;
    this->Hit_points += amount;
    this->Energy_points--;
}

std::string ClapTrap::get_Name(void)
{
    return (this->name);
}

int ClapTrap::get_Hit_points(void)
{
    return (this->Hit_points);
}

int ClapTrap::get_Energy_points(void)
{
    return (this->Energy_points);
}

int ClapTrap::get_Attak_damage(void)
{
    return (this->Attack_damage);
}

void    ClapTrap::set_Name(std::string name)
{
    this->name = name;
}

void    ClapTrap::set_Hit_points(int a)
{
    this->Hit_points = a;
}

void    ClapTrap::set_Energy_points(int a)
{
    this->Energy_points = a;
}

void    ClapTrap::set_Attak_damage(int a)
{
    this->Attack_damage = a;   
}
