#include "contact.hpp"

std::string Contact::ft_get_darkest_secret()
{
	return (darkest_secret);
}
std::string Contact::ft_get_last_name()
{
	return (last_name);
}
std::string Contact::ft_get_nicke_name()
{
	return (nickname);
}
std::string Contact::ft_get_first_name()
{
	return (first_name);
}
std::string Contact::ft_get_phone_number()
{
	return (phone_number);
}

void Contact::ft_add_darkest_secret(std::string ssecret)
{
	darkest_secret = ssecret;
}
void Contact::ft_add_first_name(std::string f_name)
{
	first_name = f_name;
}
void Contact::ft_add_last_name(std::string l_name)
{
	last_name = l_name;
}
void Contact::ft_add_nicke_name(std::string n_name)
{
	nickname = n_name;
}
void Contact::ft_add_phome_number(std::string number)
{
	phone_number = number;
}

Contact::Contact()
{
}
Contact::~Contact()
{
}