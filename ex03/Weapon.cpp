/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:27:59 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/18 10:05:49 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}

const std::string	Weapon::getType(void) const
{
	return (type);
}

Weapon::~Weapon(void)
{
	std::cout << type << ": Weapon Destructor called" << std::endl;
}

Weapon::Weapon(void)
{
	type = "nameless weapon";
	std::cout << type << ": Weapon Constructor called" << std::endl;
}

Weapon::Weapon(std::string new_type)
{
	type = new_type;
	std::cout << type << ": Weapon Constructor called" << std::endl;
}
