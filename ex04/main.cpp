/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:35:14 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/16 13:59:05 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileStream.hpp"

int main(int argc, char **argv)
{
	int		err;

	if (argc != 4)
		return (std::cout << "./SedIsForLosers [file] [s1] [s2]" << std::endl, 1);
	FileStream stream(argv[1]);
	err = stream.checkFile();
	if (err == 1)
		return (std::cout << "error: bad input file" << std::endl, 1);
	if (err == 2)
		return (std::cout << "error: bad output file" << std::endl, 1);
	stream.inputStream();
	if (stream.checkEOF() == 1)
		return (std::cout << "error: input file is empty" << std::endl, 1);
	stream.openOut(argv[1]);
	while (true)
	{
		stream.replaceInStream(argv[2], argv[3]);
		stream.outputStream();
		stream.inputStream();
		if (stream.checkEOF() == 1)
			break ;
	}
	return (0);
}
