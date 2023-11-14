#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructer called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout << "AMateria  constructer called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    *this = other;
    std::cout << "AMateria copy constructer called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout << "AMateria copy assignement operator called" << std::endl;
    return (*this);
}



std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}

AMateria::~AMateria()
{
    std::cout << "AMateria default destructer called" << std::endl;
}
