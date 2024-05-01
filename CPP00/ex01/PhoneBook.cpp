/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:07:05 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/27 14:08:06 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

static bool	control_str(std::string str)
{
	int	i;

	i = 0;
	if (str.empty())
		return (std::cout << "Empty line" << std::endl, false);
	while(str[i])
	{
		if (isdigit(str[i]))
			return (std::cout << "Invalid Alphabetic Character" << std::endl, false);
		i++;
	}
	return (true);
}

static bool	control_digit(std::string str)
{
	int	i;

	i = 0;
	if (str.empty())
		return (std::cout << "Empty line" << std::endl, false);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (std::cout << "Invalid Number" << std::endl , false);
		i++;
	}
	return (true);
}

void	PhoneBook::add_contact()
{
	static int i = 0;

	std::string name;
	std::string surname;
	std::string nickname;
	std::string number;
	std::string DarkesSecret;

	do
	{
		std::cout << "Get Name:";
		getline(std::cin, name);
	}
	while (!control_str(name));
	do
	{
		std::cout << "Get Surname:";
		getline(std::cin, surname);
	}
	while (!control_str(surname));
	do
	{
		std::cout << "Get Nickname:";
		getline(std::cin, nickname);
	}
	while (!control_str(nickname));
	do
	{
		std::cout << "Get PhoneNumber:";
		getline(std::cin, number);
	}
	while (!control_digit(number));
	do
	{
		std::cout << "Get Darkest Secret:";
		getline(std::cin, DarkesSecret);
	}
	while (!control_str(DarkesSecret));
	if (i < 8)
	{
		list[i].set_type("Name",name);
		list[i].set_type("Lastname",surname);
		list[i].set_type("Nickname",nickname);
		list[i].set_type("PhoneNumber",number);
		list[i].set_type("DarkestSecret",DarkesSecret);
		i++;
	}
	else
	{
		i = 0;
		list[i].set_type("Name",name);
		list[i].set_type("Lastname",surname);
		list[i].set_type("Nickname",nickname);
		list[i].set_type("PhoneNumber",number);
		list[i].set_type("DarkestSecret",DarkesSecret);
		i = 7;
		i++;
	}
}

void	PhoneBook::search_contact()
{
	size_t	index = 0;
	std::string getnum;
	size_t	index2 = 0;
	const char *ptr;
	while (true)
	{
		if (list[index].get_type("Name") == "")
			break;
		if (index < 8)
			list[index].print_contact(index);
		else
			break;
		index++;
	}
	std::cout << "Enter index" << std::endl;
	std::getline(std::cin, getnum);
	if (control_digit(getnum))
		ptr = getnum.c_str();
	else
		return;
	index2 = atoi(ptr);
	if ((index2 >= 1 && index2 <= 8) && index2 <= index)
	{
		list[index2 - 1].print_absolute_contact(index2 - 1);
		index = 0;
	}
	else if (getnum == "9" || getnum == "0" || index2 >= index)
	{
		std::cout << "Invalid Option" << std::endl;
		return;
	}
}
