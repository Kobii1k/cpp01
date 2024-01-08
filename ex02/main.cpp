/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:23:11 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/07 19:25:03 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	stringREF = str;

	std::cout << &str << std::endl << stringPTR << std::endl << &stringREF << std::endl;
	std::cout << str << std::endl << *stringPTR << std::endl << stringREF << std::endl;
	return (0);
}
