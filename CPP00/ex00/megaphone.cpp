/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:06:54 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/25 17:36:58 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (strcmp(av[0], "./megaphone") == 0 && !av[1])
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 1);
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
			std::cout << (char)std::toupper(av[i][j]);
	}
	std::cout << std::endl;
}
