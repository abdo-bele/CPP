#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
    Ice(std::string const & type);
    Ice(const Ice &other);
    Ice &operator=(const Ice &);
    Ice();
    ~Ice();

    Ice* clone() const;
    void use(ICharacter& target);
};



#endif