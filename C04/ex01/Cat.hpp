#ifndef CAT_HPP
#define CAT_HPP

#include  "Animal.hpp"
#include  "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *obj;
    public:
        Cat();
        Cat(std::string);
        Cat(const Cat &);
        Cat &operator=(const Cat &);
        void    makeSound(void) const;
        ~Cat();
};


#endif