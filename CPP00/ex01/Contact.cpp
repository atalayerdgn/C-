/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:06:58 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/27 13:51:05 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "PhoneBook.hpp"

void	Contact::set_type(std::string type, std::string info)
{
		if (type == "Name")	this->name=info;
		else if (type == "Lastname") this->lastname=info;
		else if (type == "Nickname") this->nickname=info;
		else if (type == "PhoneNumber") this->phone_num=info;
		else if (type == "DarkestSecret") this->darkest_secret=info;
}

std::string Contact::get_type(std::string type)
{
		if (type == "Name")	return (this->name);
		else if (type == "Lastname") return (this->lastname);
		else if (type == "Nickname")	return (this->nickname);
		else if (type == "PhoneNumber") return (this->phone_num);
		else if (type == "DarkestSecret") return (this->darkest_secret);
		return ("İnvalid Option");
}

void	Contact::print_contact(size_t index)
{
	if (index == 0)
	{
		std::cout << "  INDEX" << "       NAME" << "     LASTNAME" << "   NICKNAME" <<  std::endl;
		std::cout << "----------*----------*----------*----------*" << std::endl;
		std::cout << std::setw(10) << index + 1 << "|";
		std::cout << std::setw(10) << print_other(this->get_type("Name")) << "|";
		std::cout << std::setw(10) << print_other(this->get_type("Lastname")) << "|";
		std::cout << std::setw(10) << print_other(this->get_type("Nickname")) << "|";
		std::cout << std::endl;
		std::cout << "----------*----------*----------*----------*" << std::endl;
	}
	else
	{
		std::cout << std::setw(10) << index + 1 << "|";
		std::cout << std::setw(10) << print_other(this->get_type("Name")) << "|";
		std::cout << std::setw(10) << print_other(this->get_type("Lastname")) << "|";
		std::cout << std::setw(10) << print_other(this->get_type("Nickname")) << "|";
		std::cout << std::endl;
		std::cout << "----------*----------*----------*----------*" << std::endl;
	}
}

void	Contact::print_absolute_contact(size_t index)
{
	(void)index;
	std::cout << "---NAME---" << std::endl;
	std::cout << print_other(this->get_type("Name")) << std::endl;
	std::cout << "-LASTNAME-" << std::endl;
	std::cout << print_other(this->get_type("Lastname")) << std::endl;
	std::cout << "-NICKNAME-" << std::endl;
	std::cout << print_other(this->get_type("Nickname")) << std::endl;
	std::cout << "-PhoneNum-" << std::endl;
	std::cout << print_other(this->get_type("PhoneNumber")) << std::endl;
	std::cout << "DarkestSec" << std::endl;
	std::cout << print_other(this->get_type("DarkestSecret")) << std::endl;
}

std::string Contact::print_other(std::string str)
{
	if (str.length() > 9)
	{
		std::string tmp;
		tmp = str.substr(0, 10);
		tmp[9] = '.';
		return (tmp);
	}
	return (str);
}
