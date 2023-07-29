#include "phonebook.hpp"

int main(int ac, char **av)
{
	PhoneBook book;
	(void)av;
	// Contact cnt1 = Contact("abdellah", "archtouy", "0613221074", "bele", "bele her");
	std::string input;

	if (ac != 1)
	{
		std::cout << "to many argument.";
		return 1;
	}

	while (1)
	{
		std::cout<< "Enter your command : " ;
		if (!std::getline(std::cin, input))
			exit(0);
		if (input == "ADD")
		{
			ft_add_contact(&book);
		}
		else if (input == "SEARCH")
			ft_get_contact(&book);
		else if (input == "EXIT")
		{
			std::cout << "The program quits" << std::endl;
			exit(0);
		}
		else
			continue;
	}
}