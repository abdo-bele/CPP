#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include  "Brain.hpp"

class Dog : public AAnimal
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