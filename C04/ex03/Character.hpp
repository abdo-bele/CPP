#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharcter.hpp"


class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *amateria[4];

    public :
        Character(std::string const & type);
        Character(const Character &other);
        Character &operator=(const Character &);
        Character();
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

};


#endif