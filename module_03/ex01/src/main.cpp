/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:37:22 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/11 11:59:11 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scavtrap("Bob2");

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