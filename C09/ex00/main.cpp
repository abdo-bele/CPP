#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    
    if (ac == 2)
    {
        std::string filename = av[1];
        std::string datafile = "data.csv";
        std::ifstream infile(filename);
        std::ifstream data(datafile);
        if (!infile.is_open() || !data.is_open())
        {
            std::cout << "file error" << std::endl;
            return 1;
        }
        else if(ac != 2)
        {
            std::cout << "ARGUMENTS ERROR" << std::endl;
            return 1;
        }
        try
        {
            return_value(infile, data);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }  
    }
}