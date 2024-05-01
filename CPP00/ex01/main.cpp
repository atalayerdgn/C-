/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:07:02 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/25 13:07:03 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 1 || (strcmp(argv[0],"./PhoneBook") != 0))
		return (0);
	std::string string;
	PhoneBook phone;

	while(string != "EXIT")
	{
		std::cout << "$PhoneBook> ";
		std::getline(std::cin, string);
		if (string == "ADD")	phone.add_contact();
		else if (string == "SEARCH")	phone.search_contact();
	}
	return 0;
}

