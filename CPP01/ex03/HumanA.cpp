/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:16 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 06:50:39 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
HumanA::HumanA()
{

}

HumanA::~HumanA()
{

}

HumanA::HumanA(std::string name, Weapon &type)
{
	this->name = name;
	this->weapon = &type;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

