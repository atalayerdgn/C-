/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:46:54 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 07:28:23 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
	this->Name = name;
}
Zombie::Zombie()
{
	std::cout << "Constructor called" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << this->Name << " has been slain" << std::endl;
}
