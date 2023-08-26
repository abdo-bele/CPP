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
	std::ofstream file1(filename + ".replace");
	std::string line;
	size_t pos = 0;
	std::string line1;
	while(std::getline(file, line))
	{
		if(!s2.empty())
		{
			while (line.find(s1, 0) != std::string::npos && !s1.empty() && !s2.empty())
			{
				pos = line.find(s1,0);
				line1.assign(line, 0,pos);
				line1.append(s2);
				file1 << line1;
				pos += s1.length();
				line.erase(0, pos);
			}
		}
		if (!line.empty())
			file1 << line;
		file1 << "\n";
	}
	file.close();
	file1.close();
}