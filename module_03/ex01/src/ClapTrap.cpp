/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:35:29 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/08 10:58:25 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(): _name("No_name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): _name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points), _attack_damage(other._attack_damage)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap name constructor called." << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hit_points > 0 && _energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
		std::cout << "ClapTrap " << _name << " can't attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage." << std::endl;
		if (amount >= _hit_points)
			_hit_points = 0;
		else
			_hit_points -= amount;
	}
	else
		std::cout << "ClapTrap " << _name << " can't take more, stop!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " recover " << amount << " hit points!" << std::endl;
		_hit_points += amount;
		_energy_points--;
	}
	else
		std::cout << "ClapTrap " << _name << " can't repair himself." << std::endl;
}
