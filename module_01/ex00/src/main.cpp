/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:28:07 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/27 14:55:24 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_ptr;

	zombie_ptr = newZombie("Hugo");
	zombie_ptr->announce();
	randomChump("Horse");
	delete zombie_ptr;
}