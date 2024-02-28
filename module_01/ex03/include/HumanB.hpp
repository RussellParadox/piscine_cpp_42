/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:12:14 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/28 15:26:22 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;

		//Default constructor
		HumanB();
	public:
		//Copy constructor
		HumanB(const HumanB &other);

		//Assignement operator
		HumanB	&operator=(const HumanB &other);

		//Destructor
		~HumanB();

		//Parametized constructor
		HumanB(std::string name);

		//Print an attack message
		void	attack(void);

		//Set _weapon
		void	setWeapon(Weapon &weapon);
};

#endif