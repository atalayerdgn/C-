/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 04:47:54 by aerdogan          #+#    #+#             */
/*   Updated: 2024/01/28 04:47:55 by aerdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Harl
{
	private:
		void (Harl::*functions[4])(void);
		std::string	arr[4];
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl(void);
		void complain( std::string level );
		~Harl(void);
};
