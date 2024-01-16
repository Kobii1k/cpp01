/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:06:50 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/16 12:29:11 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
	#define HARL_HPP

	#include <iostream>
	#include <string>
	#include <fstream>

	class Harl
	{
		private:
			void debug( void );
			void info( void );
			void warning( void );
			void error( void );
		public:
			void complain(std::string level);
	};
#endif
