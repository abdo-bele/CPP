#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *amateria[4];

    public:
        // MateriaSource(std::string const & type);
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator=(const MateriaSource &);
        MateriaSource();
        ~MateriaSource();

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif 