/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:29:46 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/28 11:21:31 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	if (new_zombie == NULL)
		return (NULL);
	return (new_zombie);
}