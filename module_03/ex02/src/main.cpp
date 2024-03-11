/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:37:22 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/11 10:13:36 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	claptrap("Bob");
	ScavTrap	scavtrap("Bob2");
	FragTrap	fragtrap("Bob3");

	claptrap.attack("Horse");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);
	for (int i = 0; i < 9; i++)
		claptrap.attack("Horse");
	claptrap.attack("Horse");
	claptrap.beRepaired(2);
	claptrap.takeDamage(10);
	claptrap.takeDamage(7);

	scavtrap.attack("Horse");
	scavtrap.takeDamage(3);
	scavtrap.beRepaired(2);
	for (int i = 0; i < 49; i++)
		scavtrap.attack("Horse");
	scavtrap.attack("Horse");
	scavtrap.beRepaired(2);
	scavtrap.takeDamage(100);
	scavtrap.takeDamage(7);
	scavtrap.guardGate();

	fragtrap.attack("Horse");
	fragtrap.takeDamage(3);
	fragtrap.beRepaired(2);
	for (int i = 0; i < 99; i++)
		fragtrap.attack("Horse");
	fragtrap.attack("Horse");
	fragtrap.beRepaired(2);
	fragtrap.highFivesGuys();
	fragtrap.takeDamage(100);
	fragtrap.takeDamage(10);
}