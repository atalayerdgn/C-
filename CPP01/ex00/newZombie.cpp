/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:46:49 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 07:14:07 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie * newZombie(std::string name)
{
	Zombie *n2;

	n2 = new Zombie();
	if (!n2)
		return (NULL);
	n2->setName(name);
	return (n2);
}
