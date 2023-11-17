#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal
{
    protected:
        std::string Type;
    public:
        Animal();
        Animal(std::string);
        Animal(const Animal &);
        Animal &operator=(const Animal &);
        virtual void    makeSound(void) const;
        std::string getType(void) const;
        void setType (std::string Type);
        virtual ~Animal();
};




#endif