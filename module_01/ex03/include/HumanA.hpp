/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:11:31 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/28 15:44:16 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&weapon;
		std::string	name;

		//Default constructor
		HumanA();
	public:
		//Copy constructor
		HumanA(const HumanA &other);

		//Assignement operator
		HumanA	&operator=(const HumanA &other);

		//Destructor
		~HumanA();

		//Parametized constructor
		HumanA(std::string name, Weapon &weapon);

		//Print an attack message
		void	attack(void);
};

#endif