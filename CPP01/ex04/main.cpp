/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:44 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 04:47:45 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Missing or extra arguments!!!" << std::endl;
		return 1;
	}

	std::ifstream input;
	std::ofstream output;
	std::string input_file;
	std::string output_file;

	input_file = av[1];
	output_file = input_file + ".replace";

	input.open(input_file);

	if (!input.is_open())
	{
		std::cout << "İnput file not opened!!!" << std::endl;
		return 1;
	}

	output.open(output_file);

	if (!output.is_open())
	{
		input.close();
		std::cout << "Output file not created!!!" << std::endl;
		return 1;
	}

	std::string line;
	size_t		pos;

	std::string s1;
	std::string s2;

	s1 = av[2];
	s2 = av[3];
	while (std::getline(input, line))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos = line.find(s1, pos + s2.length());
		}
		output << line << std::endl;
	}

	input.close();
	output.close();
	return 0;
}
