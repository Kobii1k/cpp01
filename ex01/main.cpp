/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:23:11 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/07 19:12:54 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
	Zombie *h1 = zombieHorde(5, "FIVE");
	Zombie *h2 = zombieHorde(10, "TEN");

	for (int i = 0; i < 5; i++)
	{
		h1[i].announce();
	}
	for (int i = 0; i < 10; i++)
	{
		h2[i].announce();
	}
	delete [] h1;
	delete [] h2;
	return (0);
}
