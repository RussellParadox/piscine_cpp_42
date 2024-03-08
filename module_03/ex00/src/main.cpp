/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:37:22 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/08 09:14:38 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	claptrap("Bob");

	claptrap.attack("Horse");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);
	for (int i = 0; i < 9; i++)
		claptrap.attack("Horse");
	claptrap.attack("Horse");
	claptrap.beRepaired(2);
	claptrap.takeDamage(10);
	claptrap.takeDamage(7);
}