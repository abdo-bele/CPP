#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include "contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		Contact ft_getcontact(int index);
		void	add_contact(Contact new_contact, int *index, PhoneBook *book);
		PhoneBook();
		~PhoneBook();
};

void    ft_add_contact(PhoneBook *book);
void    ft_search(PhoneBook *book);
void	ft_search(PhoneBook *book, int i);
void	ft_get_contact(PhoneBook *book);

#endif