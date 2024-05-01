/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:46:52 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 07:14:18 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->Name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::randomChump(std::string name)
{
	Zombie *n2 = newZombie(name);
	n2->announce();
	delete(n2);
}
