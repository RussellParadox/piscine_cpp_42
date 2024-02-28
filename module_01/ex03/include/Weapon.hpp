/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:11:04 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/28 15:17:08 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		//Default constructor
		Weapon();

		//Copy constructor
		Weapon(const Weapon &other);

		//Assignement operator
		Weapon	&operator=(const Weapon &other);

		//Destructor
		~Weapon();

		//Parametized constructor
		Weapon(std::string type);

		//Return a constant reference to _type
		const std::string	&getType(void);

		//Set _type
		void	setType(std::string new_type);
};

#endif