#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructer called" << std::endl;
    // this->type = "MateriaSource";
}

// MateriaSource::MateriaSource(std::string const &type)
// {
//     // this->type = type;
//     std::cout << "MateriaSource  constructer called" << std::endl;
// }

MateriaSource::MateriaSource(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4;i++)
        {
            amateria[i] = other.amateria[i]->clone();
        }
    }
    std::cout << "MateriaSource copy constructer called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    std::cout << "MateriaSource copy assignement operator called" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
        {
            delete amateria[i];
        }
        for (int i = 0; i < 4;i++)
        {
            amateria[i] = obj.amateria[i]->clone();
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *obj)
{
    for (int i = 0; i < 4; i++)
    {
        if (amateria[i] == NULL)
            amateria[i] = obj;
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (amateria[i]->getType() == type)
            return (amateria[i]->clone());
    }
    return NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource default destructer called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete amateria[i];
    }
}
