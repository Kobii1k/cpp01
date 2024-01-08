/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:28:07 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/08 18:25:38 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
	#define HUMANB_HPP

	#include "Weapon.hpp"

	class HumanB
	{
		private:
			std::string		name;
			Weapon			*weapon;
		public:
			void			attack(void);
			void			setWeapon(Weapon &new_weapon);
							HumanB(std::string new_name);
	};
#endif
