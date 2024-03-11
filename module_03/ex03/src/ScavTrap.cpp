/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:26:10 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/08 10:56:23 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_hit_points > 0 && _energy_points > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
		std::cout << "ScavTrap " << _name << " can't attack." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap now in Gate keeper mode." << std::endl;
}