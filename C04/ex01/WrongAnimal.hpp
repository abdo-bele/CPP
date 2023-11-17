#ifndef WRONGAnimal_HPP
#define WRONGAnimal_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string Type;
    public:
        WrongAnimal();
        WrongAnimal(std::string);
        WrongAnimal(const WrongAnimal &);
        WrongAnimal &operator=(const WrongAnimal &);
        void    makeSound(void) const;
        std::string getType(void) const;
        void setType (std::string Type);
        ~WrongAnimal();
};




#endif