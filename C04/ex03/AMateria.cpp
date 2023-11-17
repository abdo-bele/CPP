#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "AMateria default constructer called" << std::endl;
    this->type = "type";
}

AMateria::AMateria(std::string const &type)
{
    // std::cout << "AMateria  constructer called" << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
    // std::cout << "AMateria copy constructer called" << std::endl;
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    // std::cout << "AMateria copy assignement operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
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
    // std::cout << "AMateria default destructer called" << std::endl;
}
