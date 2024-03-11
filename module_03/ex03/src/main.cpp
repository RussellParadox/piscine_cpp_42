/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:37:22 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/11 11:26:39 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamondtrap("Bob4");

	diamondtrap.attack("Horse");
	diamondtrap.takeDamage(3);
	diamondtrap.beRepaired(2);
	for (int i = 0; i < 49; i++)
		diamondtrap.attack("Horse");
	diamondtrap.attack("Horse");
	diamondtrap.beRepaired(2);
	diamondtrap.highFivesGuys();
	diamondtrap.guardGate();
	diamondtrap.whoAmI();
	diamondtrap.takeDamage(100);
	diamondtrap.takeDamage(10);
}