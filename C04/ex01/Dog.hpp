#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include  "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *obj;
    public:
        Dog();
        Dog(std::string);
        Dog(const Dog &);
        Dog &operator=(const Dog &);
        void    makeSound(void) const;
        ~Dog();
};


#endif