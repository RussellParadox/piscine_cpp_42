/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:01:00 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 11:07:57 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal
{
	protected:
		std::string	_type;
	public:
		//Default constructor
		Animal();

		//Copy constructor
		Animal(const Animal &other);

		//Assignement operator overload
		Animal	&operator=(const Animal &other);

		//Destructor
		virtual ~Animal();

		//Get type
		std::string	getType(void) const;

		//Make sound message
		virtual void	makeSound(void) const;
};

#endif