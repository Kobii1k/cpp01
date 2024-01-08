/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileStream.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:42:25 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/08 19:26:31 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESTREAM_HPP
	#define FILESTREAM_HPP

	#include <iostream>
	#include <string>
	#include <fstream>

	class FileStream
	{
		private:
			std::ifstream	input;
			std::ofstream	output;
			std::string		currentLine;
			int				stop;
		public:
			int				checkFile(void);
			int				checkEOF(void);
			void			inputStream(void);
			void			outputStream(void);
			void			replaceInStream(char *str1, char *str2);
							FileStream(char *str);
							~FileStream(void);
	};
#endif
