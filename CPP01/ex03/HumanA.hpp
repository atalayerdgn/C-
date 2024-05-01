/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:19 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 06:50:27 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	Weapon *weapon;
	std::string name;
	public:
	HumanA();
	HumanA(std::string name, Weapon &type);
	~HumanA();
	void	attack();
};
