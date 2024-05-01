/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:07:00 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/25 13:07:01 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact
{
	std::string	name;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_num;
	std::string	darkest_secret;
	public:
	void	set_type(std::string type, std::string info);
	std::string get_type(std::string type);
	std::string print_other(std::string str);
	void	print_contact(size_t index);
	void	print_absolute_contact(size_t index);

};
