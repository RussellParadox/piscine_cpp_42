/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:16:23 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/28 15:18:33 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon() : type("")
{
}

Weapon::Weapon(const Weapon &other) : type(other.type)
{
}

Weapon	&Weapon::operator=(const Weapon &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string type) : type(type)
{
}

const std::string	&Weapon::getType(void)
{
	const std::string	&const_type = type;

	return (const_type);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}