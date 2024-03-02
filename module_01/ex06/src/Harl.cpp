/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:04:29 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/02 16:26:36 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
}

Harl::Harl(const Harl &other)
{
	(void)other;
}

Harl	&Harl::operator=(const Harl &other)
{
	if (this != &other)
	{
	}
	return (*this);
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cerr << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cerr << "I cannot believe adding extra bacon costs more money.\nYou didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cerr << "I think I deserve to have some extra bacon for free.\nI\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	const std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void			(Harl::*print_functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*print_functions[i])();
			return ;
		}
	}
}