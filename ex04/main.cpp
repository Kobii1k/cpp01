/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:35:14 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/08 19:19:01 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileStream.hpp"

int main(int argc, char **argv)
{
	int		err;

	if (argc != 4)
		return (std::cout << "4 parameters are needed" << std::endl, 1);
	FileStream stream(argv[1]);
	err = stream.checkFile();
	if (err == 1 || err == 2)
		return (std::cout << "file input error" << std::endl, 1);
	while (true)
	{
		stream.inputStream();
		if (stream.checkEOF() == 1)
			break ;
		stream.replaceInStream(argv[2], argv[3]);
		stream.outputStream();
	}
	std::cout << "Done !" << std::endl;
	return (0);
}
