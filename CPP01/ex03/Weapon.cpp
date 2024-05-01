/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:30 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 04:47:31 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}
Weapon::Weapon(std::string name)
{
	this->type = name;
}
void	Weapon::setType(std::string newType)
{
	this->type = newType;
}

const std::string &Weapon::getType()
{
	return(type);
}
