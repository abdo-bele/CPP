#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void    Harl::complain(std::string level)
{
    Harl obj;
    (void)level;
    void (Harl::*ptr[4])() = {&Harl::debug,&Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i =0;

    while (i < 4)
    {
        if (level == levels[i])
            break ;
        i++;
    }
    i++;
    switch (i)
    {
        case 1:
        {
            std::cout << "[ DEBUG ]" << std::endl;
            (obj.*ptr[0])();
            std::cout << "\n";
        }
        case 2:
        {
            std::cout << "[ INFO ]" << std::endl;
            (obj.*ptr[1])();
            std::cout << "\n";
        }
        case 3:
        {
            std::cout << "[ WARNING ]" << std::endl;
            (obj.*ptr[2])();
            std::cout << "\n";
        }
        case 4:
        {
            std::cout << "[ ERROR ]" << std::endl;
            (obj.*ptr[3])();
            std::cout << "\n";
            break ;
        }
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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