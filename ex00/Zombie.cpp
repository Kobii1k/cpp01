/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:27:59 by mgagne            #+#    #+#             */
/*   Updated: 2023/12/28 15:18:22 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void			Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void			Zombie::set_name(std::string new_name)
{
	name = new_name;
}

std::string		Zombie::get_name(void)
{
	return (name);
}

Zombie::Zombie(std::string new_name)
{
	name = new_name;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": destroyed" << std::endl;
}
