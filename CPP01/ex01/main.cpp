/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:02 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 06:38:00 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *test;

    test = zombieHorde(5, "Zombie");
    for (int i = 0; i < 5; i++)
        test[i].announce();
    delete[] test;
}
