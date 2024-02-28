/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:16:54 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/28 15:26:02 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.hpp"

HumanB::HumanB() : weapon(NULL), name("")
{
}

HumanB::HumanB(const HumanB &other) : weapon(other.weapon), name(other.name)
{
}

HumanB	&HumanB::operator=(const HumanB &other)
{
	if (this != &other)
	{
		weapon = other.weapon;
		name = other.name;
	}
	return (*this);
}

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string name) : weapon(NULL), name(name)
{
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their ";
	if (weapon != NULL)
		std::cout << weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}