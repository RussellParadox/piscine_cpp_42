/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:01:45 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 11:05:49 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal
{
	private:
	public:
		//Default constructor
		Dog();

		//Copy constructor
		Dog(const Dog &other);

		//Destructor
		~Dog();

		//Make sound message
		void	makeSound(void) const;
};

#endif