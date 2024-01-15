/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:08:47 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/15 13:36:58 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::HumanA(std::string new_name, Weapon &new_weapon)
{
	name = new_name;
	weapon = &new_weapon;
	std::cout << name << ": HumanA Constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << name << ": HumanA Destructor called" << std::endl;
}