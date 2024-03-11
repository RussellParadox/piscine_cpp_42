/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:17:28 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/11 11:37:57 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		//Default constructor
		DiamondTrap();

		//Copy constructor
		DiamondTrap(const DiamondTrap &other);

		//Destructor
		~DiamondTrap();

		//Parametized constructor override: std::string
		DiamondTrap(std::string name);

		//Attack message override
		void	attack(const std::string &target);

		//Who am i message
		void	whoAmI(void);
};

#endif