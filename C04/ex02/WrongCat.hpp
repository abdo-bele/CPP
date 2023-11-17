#ifndef WORNGCAT_HPP
#define WORNGCAT_HPP

#include "WrongAAnimal.hpp"

class WrongCat : public WrongAAnimal
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