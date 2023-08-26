#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Default constructer is called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "destructer is called" << std::endl;
}

void    Harl::complain(std::string level)
{
    Harl obj;
    (void)level;
    void (Harl::*ptr[4])() = {&Harl::debug, &Harl::error,&Harl::info, &Harl::warning};
    std::string levels[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
    int i =0;

    while (i < 4)
    {
        if (level == levels[i])
            (obj.*ptr[i])();
        i++;
    }
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}