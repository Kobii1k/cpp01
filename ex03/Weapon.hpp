/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:04:59 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/18 10:06:04 by mgagne           ###   ########.fr       */
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
			Weapon(void);
			~Weapon(void);
			Weapon(std::string new_type);
			void					setType(std::string new_type);
			const std::string		getType(void) const;
	};
#endif
