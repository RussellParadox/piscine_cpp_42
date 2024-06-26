/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:37:22 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/11 11:58:44 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fragtrap("Bob3");

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