/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileStream.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:42:25 by mgagne            #+#    #+#             */
/*   Updated: 2024/01/16 17:41:27 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESTREAM_HPP
	#define FILESTREAM_HPP

	#include <iostream>
	#include <string>
	#include <fstream>
	#include <cstring>

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
			void			openOut(char *str);
							FileStream(char *str);
							~FileStream(void);
	};
#endif
