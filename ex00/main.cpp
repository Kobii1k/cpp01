/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:23:11 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/15 12:32:38 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
	Zombie z1("z1");
	Zombie *z2;

	z2 = newZombie("z2");
	z1.announce();
	z2->announce();
	randomChump("z3");
	delete z2;
	return (0);
}
