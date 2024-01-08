/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:04:59 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/08 18:31:03 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
	#define WEAPON_HPP

	#include <string>
	#include <iostream>

	class Weapon
	{
		private:
			std::string		type;
		public:
			void			setType(std::string new_type);
			std::string		getType(void);
							Weapon(std::string new_type);
	};
#endif
