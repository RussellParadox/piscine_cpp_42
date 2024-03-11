/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:54:47 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/11 10:14:10 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap name constructor called." << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap want a positive high five." << std::endl;
}