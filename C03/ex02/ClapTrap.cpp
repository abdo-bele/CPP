#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructer is called" << std::endl;
    this->name = "name";
    this->Attack_damage = 0;
    this->Energy_points = 10;
    this->hit_points = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructer is called" << std::endl;
    this->name = name;
    this->Attack_damage = 0;
    this->Energy_points = 10;
    this->hit_points = 10;
}

ClapTrap::ClapTrap(ClapTrap &a)
{
    std::cout << "ClapTrap copy constructer is called" << std::endl;
    *this = a;
}

ClapTrap   &ClapTrap::operator=(const ClapTrap &s)
{
    this->Attack_damage = s.Attack_damage;
    this->Energy_points = s.Energy_points;
    this->hit_points = s.hit_points;
    this->name = s.name;
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructer is called" << std::endl;
}


void    ClapTrap::attack(const std::string& target)
{
    if (this->Energy_points <= 0)
    {
        std::cout <<  "FragTrap " << this->name << " can’t do anything" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->name << " attacks " <<target << " , causing " << this->Attack_damage <<" points of damage!" << std::endl;
    this->Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points <= 0 || (int)amount < 0)
    {
        std::cout <<  "FragTrap " << this->name << " can’t do anything" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->name << " Take "<< amount <<" of Damage" << std::endl;
    this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount + this->hit_points > 100 || (int)amount < 0)
    {
        std::cout <<  "FragTrap " << this->name << " can’t exceeds 100 hit points" << std::endl;
        return ;
    }
    if (this->Energy_points <= 0)
    {
        std::cout <<  "FragTrap " << this->name << " can’t do anything" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->name << " Repair itself" << std::endl;
    this->hit_points += amount;
    this->Energy_points--;
}

std::string ClapTrap::getname(void)
{
    return (this->name);
}

int ClapTrap::get_hit_points(void)
{
    return (this->hit_points);
}

int ClapTrap::get_energy_points(void)
{
    return (this->Energy_points);
}

int ClapTrap::get_attak_damage(void)
{
    return (this->Attack_damage);
}
