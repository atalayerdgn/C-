/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:12 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 07:17:30 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "String adress is : " << &str << std::endl;
 	std::cout << "Pointer is : " << stringPTR << std::endl;
	std::cout << "Reference is : " << &stringREF << std::endl;

	std::cout << "String is : " << str << std::endl;
	std::cout << "StringPTR is : " << *stringPTR << std::endl;
	std::cout << "StringREF is : " << stringREF << std::endl;
}
