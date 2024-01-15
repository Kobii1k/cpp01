/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:09:35 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/15 13:37:18 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
	#define HUMANA_HPP

	#include "Weapon.hpp"

	class HumanA
	{
		private:
			std::string		name;
			Weapon			*weapon;
		public:
			void			attack(void);
							HumanA(std::string new_name, Weapon &new_weapon);
							~HumanA(void);
	};
#endif
