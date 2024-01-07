/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:49:09 by mgagne            #+#    #+#             */
/*   Updated: 2023/12/28 14:50:25 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
	#define ZOMBIE_H

	#include "Zombie.hpp"

	Zombie*		newZombie(std::string name);
	void		randomChump(std::string name);

#endif
