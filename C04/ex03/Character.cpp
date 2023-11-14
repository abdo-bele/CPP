#include "Character.hpp"

Character::Character()
{
    std::cout << "Character default constructer called" << std::endl;
    this->name = "Character";
}

Character::Character(std::string const &name)
{
    std::cout << "Character constructer called" << std::endl;
    this->name = name;
}

Character::Character(const Character &other)
{
    std::cout << "Character copy constructer called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4;i++)
        {
            amateria[i] = other.amateria[i]->clone();
        }
    }
}

Character &Character::operator=(const Character &obj)
{
    std::cout << "Character copy assignement operator called" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
        {
            delete amateria[i];
        }
        this->name = obj.name;
        for (int i = 0; i < 4;i++)
        {
            amateria[i] = obj.amateria[i]->clone();
        }
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Character default destructer called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete amateria[i];
    }
}

std::string const &Character::getName() const{
    return (this->name);
}

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!amateria[i])
            amateria[i] = m;
    }
}

void    Character::unequip(int idx)
{
    if(amateria[idx] != NULL && idx >= 0 && idx < 4)
        amateria[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target)
{
    if(amateria[idx] != NULL && idx >= 0 && idx < 4)
        amateria[idx]->use(target);
}