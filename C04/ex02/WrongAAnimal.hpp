#ifndef WRONGAAnimal_HPP
#define WRONGAAnimal_HPP

#include <iostream>

class WrongAAnimal
{
    protected:
        std::string Type;
    public:
        WrongAAnimal();
        WrongAAnimal(std::string);
        WrongAAnimal(const WrongAAnimal &);
        WrongAAnimal &operator=(const WrongAAnimal &);
        void    makeSound(void) const;
        std::string getType(void) const;
        void setType (std::string Type);
        ~WrongAAnimal();
};




#endif