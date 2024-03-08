/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:37:22 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/08 10:57:25 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	claptrap("Bob");
	ScavTrap	scavtrap("Bob2");

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
}