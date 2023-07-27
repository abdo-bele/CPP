#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void ft_add_first_name(std::string f_name);
		void ft_add_last_name(std::string l_name);
		void ft_add_nicke_name(std::string n_name);
		void ft_add_phome_number(std::string number);
		void ft_add_darkest_secret(std::string ssecret);
		std::string ft_get_first_name();
		std::string ft_get_last_name();
		std::string ft_get_nicke_name();
		std::string ft_get_phone_number();
		std::string ft_get_darkest_secret();
		Contact();
		~Contact();
};


#endif