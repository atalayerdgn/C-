/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:34 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 04:47:35 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
	std::string type;
	public:
	Weapon();
	Weapon(std::string type);
	const std::string &getType();
	void setType(std::string newType);
};
