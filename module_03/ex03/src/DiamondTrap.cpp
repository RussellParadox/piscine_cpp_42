/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:18:13 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/11 11:57:06 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap(), _name("No name")
{
	ClapTrap::_name = _name + "_clap_name";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
	ClapTrap::_name = _name + "_clap_name";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
}

DiamondTrap::~DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name + "_frag_name"), ScavTrap(name + "_scav_name"),  _name(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
}

void	DiamondTrap::attack(const std::string &target)
{
	std::cout << _attack_damage << std::endl;
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond name: " << _name << std::endl;
	std::cout << "Clap name: " << ClapTrap::_name << std::endl;
}