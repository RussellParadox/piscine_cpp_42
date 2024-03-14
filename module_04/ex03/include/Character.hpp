/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:45:17 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/14 13:59:21 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		AMateria	*_items[4];
		std::string	_name;
	public:
		//Default constructor
		Character();

		//Copy constructor
		Character(const Character &other);

		//Assignement operator overload
		Character	&operator=(const Character &other);

		//Destructor
		~Character();

		//Parametized constructor: std::string
		Character(std::string name);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif