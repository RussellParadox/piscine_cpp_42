/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:34:52 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/07 14:03:19 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
	public:
		//Default constructor
		ClapTrap();

		//Copy constructor
		ClapTrap(const ClapTrap &other);

		//Assignement operator overload
		ClapTrap	&operator=(const ClapTrap &other);

		//Destructor
		~ClapTrap();

		//Parametized constructor: std::string
		ClapTrap(std::string name);

		//Attack message
		void	attack(const std::string &target);

		//Take damage message
		void	takeDamage(unsigned int amount);

		//Self reparation message
		void	beRepaired(unsigned int amount);
};

#endif