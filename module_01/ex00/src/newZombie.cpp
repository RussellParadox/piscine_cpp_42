/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:29:46 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/27 15:29:21 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*new_zombie;
	Zombie	zombie(name);

	new_zombie = new Zombie;
	if (new_zombie == NULL)
		return (NULL);
	*new_zombie = zombie;
	return (new_zombie);
}