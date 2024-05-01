/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:05 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 06:40:01 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << Name << " was dead..." << std::endl;
}

void Zombie::setName(std::string Name)
{
    this->Name = Name;
}

void    Zombie::announce( void )
{
    std::cout << Name << "\t: BraiiiiiiinnnzzzZ..." << std::endl;
}
