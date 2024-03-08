/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:25:32 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/08 10:41:53 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <string>

class ScavTrap: public ClapTrap
{
	public:
		//Default constructor override
		ScavTrap();

		//Copy constructor override
		ScavTrap(const ScavTrap &other);

		//Destructor override
		~ScavTrap();

		//Parametized constructor override: std::string
		ScavTrap(std::string name);

		//Attack message override
		void	attack(const std::string &target);

		//Gate keeper mode message
		void	guardGate(void);
};

#endif