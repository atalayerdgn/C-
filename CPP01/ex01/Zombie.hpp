/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:07 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 06:39:38 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
private:
    std::string Name;
public:
	Zombie();
    ~Zombie();
    void setName(std::string Name);
    void announce( void );
};

Zombie* zombieHorde(int N, std::string Name);
