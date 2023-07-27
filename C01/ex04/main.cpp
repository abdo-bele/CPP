#include <iostream>
#include <fstream>
#include <string>

int main(int ac , char **av)
{
	if (ac != 4)
		return (1);
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream file(filename);
	std::ofstream file1("bele");

	std::string line;
	// int pos = 0;
	while(std::getline(file, line))
	{
		
		file1 << line << std::endl;
	}
	file.close();
	file1.close();
}