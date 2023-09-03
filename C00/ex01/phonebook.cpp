#include "phonebook.hpp"
#include <string.h>
#include <sstream>

void	PhoneBook::add_contact(Contact new_contact, int *index, PhoneBook *book)
{
	if (*index > 7)
		*index = 0;
	book->contacts[*index].ft_add_first_name(new_contact.ft_get_first_name());
	book->contacts[*index].ft_add_last_name(new_contact.ft_get_last_name());
	book->contacts[*index].ft_add_nicke_name(new_contact.ft_get_nicke_name());
	book->contacts[*index].ft_add_phome_number(new_contact.ft_get_phone_number());
	book->contacts[*index].ft_add_darkest_secret(new_contact.ft_get_darkest_secret());
	(*index)++;
}

Contact PhoneBook::ft_getcontact(int index)
{
	Contact b;
	b.ft_add_first_name(contacts[index].ft_get_first_name());
	b.ft_add_darkest_secret(contacts[index].ft_get_darkest_secret());
	b.ft_add_last_name(contacts[index].ft_get_last_name());
	b.ft_add_nicke_name(contacts[index].ft_get_nicke_name());
	b.ft_add_phome_number(contacts[index].ft_get_phone_number());
	return (b);
}

void	ft_print_contact(Contact *contacts, int i)
{
	std::string input;

	std::cout << "contact index : ";
	std::cout << i << std::endl;
	input = contacts->ft_get_first_name();
	std::cout << "contact first name : ";
	std::cout << input << std::endl;
	input = contacts->ft_get_last_name();
	std::cout << "contact last name : ";
	std::cout << input << std::endl;
	input = contacts->ft_get_nicke_name();
	std::cout << "contact nicke name : ";
	std::cout << input << std::endl;
	input = contacts->ft_get_phone_number();
	std::cout << "contact phone number : ";
	std::cout << input << std::endl;
	input = contacts->ft_get_darkest_secret();
	std::cout << "contact darkest secret : ";
	std::cout << input << std::endl;
}

void	ft_search(PhoneBook *book, int i)
{
	int index = 0;

	(void)i;
	(void)book;
	while (index + 1 < 10)
	{
		if (index + 1 == i)
		{
			Contact a = book->ft_getcontact(index);
			ft_print_contact(&a, i);
		}
		index++;
	}
	

}

void	ft_printt(Contact contacts, int i)
{
	std::string input;

	input = contacts.ft_get_first_name();
	std::cout << "#    "<< i << "   |    ";
	if (input.length() > 10)
		input[9] = '.';
	else if (input.length() < 10 && !input.empty())
	{
		int i = input.length();
		while (i++ < 10)
			std::cout << " ";
	}
	if (input.length() > 10 || input.empty())
		input.resize(10, ' ');
	std::cout << input;
	input = contacts.ft_get_last_name();
	std::cout << "|    ";
	if (input.length() > 10)
		input[9] = '.';
	else if (input.length() < 10 && !input.empty())
	{
		int i = input.length();
		while (i++ < 10)
			std::cout << " ";
	}
	if (input.length() > 10 || input.empty())
		input.resize(10, ' ');
	std::cout << input;
	input = contacts.ft_get_nicke_name();
	std::cout << "|    ";
	if (input.length() > 10)
		input[9] = '.';
	else if (input.length() < 10 && !input.empty())
	{
		int i = input.length();
		while (i++ < 10)
			std::cout << " ";
	}
	if (input.length() > 10  || input.empty())
		input.resize(10, ' ');
	std::cout << input;
	std::cout << "#"<< std::endl;	
}

void	ft_get_contact(PhoneBook *book)
{
	int i = 1;
	std::string input;
	int index = 0;

	std::cout << "#######################################################"<< std::endl;
	std::cout << "# index  #  first name  #  last name   #   nicke name #"<< std::endl;
	while (i < 9)
	{
		ft_printt(book->ft_getcontact(i-1) ,i);
		i++;
	}
	std::cout << "#######################################################"<< std::endl;
	while (1)
	{
		std::cout<< "Enter index : ";
		if (!std::getline(std::cin, input))
			exit(0);
		if (input.length() > 1 || std::isdigit(input[0]) == 0)
		{
			std::cout << "Enter a number from 1 to 8"<< std::endl;
			continue;
		}
		std::stringstream a;
		a << input;
		a >> index;
		if (index > 8 || index < 1)
		{
			std::cout << "Enter a number from 1 to 8"<< std::endl;
		}
		else
			break;
	}
	Contact l = book->ft_getcontact(index - 1);
	if (l.ft_get_first_name().empty())
		std::cout << "no contact for this index." << std::endl;
	else if (!input.empty())
		ft_search(book, index);
}

int is_number(std::string input)
{
	unsigned int i = 0;

	// if (input.length() != 10)	
	// {
	// 	std::cout << "number not accepted" << std::endl;
	// 	return (1);
	// }
	while(i < input.length())
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << "!Enter a number phone!" << std::endl;
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_add_contact(PhoneBook *book)
{
	Contact new_contact;
	static int i = 0;
	std::string input;

	while (1)
	{
		std::cout << "Enter first name : ";
		if (!std::getline(std::cin, input))
			exit(0);
		if (input.empty()){
			std::cout << "Input is empty." << std::endl;
		}
		else
			break;
	}
	new_contact.ft_add_first_name(input);
	while (1)
	{
		std::cout << "Enter last name : ";
		if (!std::getline(std::cin, input))
			exit(0);
		if (input.empty()){
			std::cout << "Input is empty." << std::endl;
		}
		else
			break;
	}
	new_contact.ft_add_last_name(input);
	while (1)
	{
		std::cout << "Enter nicke name : ";
		if (!std::getline(std::cin, input))
			exit(0);
		if (input.empty()){
			std::cout << "Input is empty." << std::endl;
		}
		else
			break;
	}
	new_contact.ft_add_nicke_name(input);
	while (1)
	{
		std::cout << "Enter number : ";
		if (!std::getline(std::cin, input))
			exit(0);
		if (input.empty()){
			std::cout << "Input is empty." << std::endl;
		}
		else if(is_number(input))
			continue;
		else
			break;
	}
	new_contact.ft_add_phome_number(input);
	while (1)
	{
		std::cout << "Enter darkest secret : ";
		if (!std::getline(std::cin, input))
			exit(0);
		if (input.empty()){
			std::cout << "Input is empty." << std::endl;
		}
		else
			break;
	}
	new_contact.ft_add_darkest_secret(input);
	book->add_contact(new_contact, &i, book);
}

PhoneBook::PhoneBook()
{
	// std::cout << "Default constructer is called" << std::endl;
}
PhoneBook::~PhoneBook()
{
    // std::cout << "destructer is called" << std::endl;
}