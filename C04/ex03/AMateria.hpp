#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "Character.hpp"
#include "ICharcter.hpp"

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria(std::string const & type);
        AMateria(const AMateria &other);
        virtual AMateria &operator=(const AMateria &);
        AMateria();
        virtual ~AMateria();
    
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};



#endif