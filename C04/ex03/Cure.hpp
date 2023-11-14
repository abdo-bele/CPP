#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"


class Cure : public AMateria
{

    public:
    Cure(std::string const & type);
    Cure(const Cure &other);
    Cure &operator=(const Cure &);
    Cure();
    ~Cure();
    
    Cure* clone() const;
    void use(ICharacter& target);
};



#endif