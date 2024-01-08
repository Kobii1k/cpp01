/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:27:59 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/08 18:30:59 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void			Weapon::setType(std::string new_type)
{
	type = new_type;
}

std::string		Weapon::getType(void)
{
	return (type);
}

Weapon::Weapon(std::string new_type)
{
	type = new_type;
}
