/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:16:39 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/28 15:44:30 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"

HumanA::HumanA(const HumanA &other) : weapon(other.weapon), name(other.name)
{
}

HumanA	&HumanA::operator=(const HumanA &other)
{
	if (this != &other)
	{
		weapon = other.weapon;
		name = other.name;
	}
	return (*this);
}

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}