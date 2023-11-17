#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string Type;
    public:
        AAnimal();
        AAnimal(std::string);
        AAnimal(const AAnimal &);
        AAnimal &operator=(const AAnimal &);
        virtual void    makeSound(void) const = 0;
        std::string getType(void) const;
        void setType (std::string Type);
        virtual ~AAnimal();
};




#endif