/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:58:58 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/14 16:50:50 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

class	Ice;
class	Cure;

Character::Character(): _name("No name")
{
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
}

Character::Character(const Character &other): _name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._items[i] != NULL)
			_items[i] = other._items[i]->clone();
		else
			_items[i] = NULL;
	}
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_items[i] != NULL)
				delete _items[i];
			if (other._items[i] != NULL)
				_items[i] = other._items[i]->clone();
			else
				_items[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_items[i] != NULL)
			delete _items[i];
	}
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int	i;

	i = 0;
	while (i < 4 && _items[i] != NULL)
		i++;
	if (i < 3)
		_items[i] = m;
	else
		std::cout << "* " << _name << ": inventory full *" << std::endl;
}

void Character::unequip(int idx)
{
	_items[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (_items[idx] != NULL)
		_items[idx]->use(target);
	else
		std::cout << "* No item at " << idx <<  " *" << std::endl;
}
