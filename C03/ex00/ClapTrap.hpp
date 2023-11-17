#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &a);
        ClapTrap   &operator=(const ClapTrap &s);
        ~ClapTrap();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string get_Name(void);
        int get_Attak_damage(void);
        int get_Hit_points(void);
        int get_Energy_points(void);
        void    set_Name(std::string name);
        void    set_Attak_damage(int a);
        void    set_Hit_points(int a);
        void    set_Energy_points(int a);

};


#endif