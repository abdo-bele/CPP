#include <iostream>

void    ft_toupper(char *str)
{
    std::string line;
    int i = 0;

    line = str;
    while (i < (int)line.length())
    {
        if (line[i]  >= 'a' && line[i] <= 'z')
            line[i] = std::toupper(line[i]);
        i++;
    }
    std::cout << line ;
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return (1);
    }
    int j = 1;
    while (av[j])
    {
        ft_toupper(av[j]);
        j++;
    }
}