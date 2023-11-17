#include "Brain.hpp"


Brain::Brain()
{
    std::cout  << "Brain Constructer is called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    std::cout  << "Brain Copy Constructer is called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout  << "Brain Copy assignment operator is called" << std::endl;
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = src.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructer is called" << std::endl;
}