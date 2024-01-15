/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:24:02 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/15 12:16:38 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
	#define ZOMBIE_HPP

	#include <string>
	#include <iostream>

	class Zombie
	{
		private:
			std::string	name;
		public:
			void			announce(void);
			void			setName(std::string new_name);
			std::string		getName(void);
							Zombie(std::string new_name);
							Zombie(void);
							~Zombie(void);
	};
#endif
