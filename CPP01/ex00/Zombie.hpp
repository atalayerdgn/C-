/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:46:57 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 07:27:38 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class	Zombie
{
	std::string Name;
	public:
	Zombie();
	void		setName(std::string name);
	void		randomChump(std::string name);
	void		announce(void);
	~Zombie();
};

Zombie	*	newZombie(std::string);
