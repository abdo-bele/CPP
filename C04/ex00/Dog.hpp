#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string);
        Dog(const Dog &);
        Dog &operator=(const Dog &);
        void    makeSound(void) const;
        ~Dog();
};


#endif