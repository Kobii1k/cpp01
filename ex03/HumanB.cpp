/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:27:06 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/08 18:29:39 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &new_weapon)
{
	weapon = &new_weapon;
}

void	HumanB::attack(void)
{
	if (weapon == NULL)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " can't attack without weapon..." << std::endl;
}

HumanB::HumanB(std::string new_name)
{
	name = new_name;
	weapon = NULL;
}

