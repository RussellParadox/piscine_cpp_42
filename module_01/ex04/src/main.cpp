/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:54:21 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/01 16:20:44 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	string_replace(std::string &str, std::string s1, std::string s2)
{
	size_t	len1;

	if (!s1.compare("") || !s1.compare(s2))
		return ;
	len1 = s1.size();
	for (size_t i = str.find(s1); i != std::string::npos; i = str.find(s1))
	{
		str.erase(i, len1);
		str.insert(i, s2);
	}
}

bool	file_replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	file_read;
	std::ofstream	file_write;
	std::string		file_content;
	std::string		line;

	file_read.open(filename.c_str());
	if (!file_read.is_open())
	{
		std::cerr << "Can't open file " << filename << std::endl;
		return (1);
	}
	while (std::getline(file_read, line))
		file_content += line + '\n';
	file_read.close();
	string_replace(file_content, s1, s2);
	file_write.open((filename.append(".replace")).c_str());
	if (!file_write.is_open())
	{
		std::cerr << "Can't open file " << filename << std::endl;
		return (1);
	}
	file_write << file_content;
	file_write.close();
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Need exactly 4 arguments" << std::endl;
		return (1);
	}
	return (file_replace(argv[1], argv[2], argv[3]));
}