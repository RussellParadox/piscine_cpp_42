/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:57:15 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/24 14:52:30 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ft.hpp"

void	ft::trim_whitespace(std::string &str)
{
	std::string    	        c;
	std::string::iterator	i;

	i = str.begin();
	c = *i;
	while (c.find_first_of(" \n\t") != std::string::npos)
	{
		str.erase(i);
		if (i == str.end())
			break ;
		c = *i;
	}
	if (str.size() < 1)
		return ;
	i = str.end() - 1;
	c = *i;
	while (c.find_first_of(" \n\t") != std::string::npos)
	{
		str.erase(i);
		if (i == str.begin())
			break ;
		i = str.end() - 1;
		c = *i;
	}
}

void	ft::getline(std::string &input, std::string prompt, char delimiter)
{
	std::cout << prompt;
	std::getline(std::cin, input, delimiter);
	ft::trim_whitespace(input);
	while (input.size() == 0)
	{
		//std::cout << "Empty input forbidden." << std::endl;
		std::cout << prompt;
		std::getline(std::cin, input, delimiter);
		ft::trim_whitespace(input);
	}
}