/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileStream.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:47:32 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/09 17:59:04 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileStream.hpp"

FileStream::FileStream(char *str)
{
	std::string		tmp;


	input.open(str, std::ifstream::in);
	tmp = std::string(str) + ".replace";
	if (input)
		output.open(tmp.c_str(), std::ofstream::out);
}

FileStream::~FileStream(void)
{
	input.close();
	output.close();
}

void	FileStream::replaceInStream(char *str1, char *str2)
{
	std::string				stream;
	std::string::size_type	i;

	i = currentLine.find(str1);
	while (i != std::string::npos)
	{
		currentLine.erase(i, std::string(str1).length());
		currentLine.insert(i, std::string(str2), 0, std::string(str2).length());
		i = currentLine.find(str1);
	}
}

int		FileStream::checkFile(void)
{
	if (!input || !output)
		return (1);
	return (0);
}

int		FileStream::checkEOF(void)
{
	return (stop);
}

void	FileStream::inputStream(void)
{
	if (!getline(input, currentLine))
		stop = 1;
}

void	FileStream::outputStream(void)
{
	output << currentLine << std::endl;
}
