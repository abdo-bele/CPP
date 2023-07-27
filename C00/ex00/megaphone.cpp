#include <iostream>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return (1);
    }
    int j = 1;
    int i = 0;
    while (av[j])
    {
        while(av[j][i])
        {
            if (av[j][i] >= 'a' && av[j][i] <= 'z')
                std::toupper(av[j][i]);
            std::cout << av[j][i];
            i++;
        }
        i=0;
        j++;
    }
}