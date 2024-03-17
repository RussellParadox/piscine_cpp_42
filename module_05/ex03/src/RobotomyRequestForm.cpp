/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:52:45 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/17 18:37:50 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy Request", 72, 45), _target(target)
{
}

void	RobotomyRequestForm::action(void) const
{
	static bool	success = false;

	std::cout << "* Some drilling noises *" << std::endl;
	if (success)
		std::cout << _target << " has been robotomized." << std::endl;
	else
		std::cout << _target << " robotomy failed." << std::endl;
	success = !success;
}