#ifndef WORNGCAT_HPP
#define WORNGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string);
        WrongCat(const WrongCat &);
        WrongCat &operator=(const WrongCat &);
        void    makeSound(void) const;
        ~WrongCat();
};


#endif