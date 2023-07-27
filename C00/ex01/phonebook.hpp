#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class PhoneBook
{
	public:
		Contact contacts[8];
};

void    ft_add_contact(PhoneBook *book);
void    ft_search(PhoneBook *book);
void	add_contact(Contact new_contact, int index, PhoneBook *book);
void	ft_search(PhoneBook *book, int i);
void	ft_get_contact(PhoneBook *book);

#endif