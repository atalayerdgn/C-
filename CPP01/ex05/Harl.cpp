/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:48 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 04:47:49 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon on my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I can't believe it costs more money to add extra bacon. You didn't put enough bacon on my burger! If you had, I wouldn't have asked for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve some extra bacon for free. I've been coming for years, you've been working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the principal now." << std::endl;
}


Harl::Harl(void)
{
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
	arr[0] = "DEBUG";
	arr[1] = "INFO";
	arr[2] = "WARNING";
	arr[3] = "ERROR";
}

Harl::~Harl(void)
{
}

void	Harl::complain( std::string level )
{
	for (int i = 0; i < 4; i++)
		if (level == arr[i])
			return ((this->*functions[i])());
	std::cout << "Error!!" << std::endl;
}

