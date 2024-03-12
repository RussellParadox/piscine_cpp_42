/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:01:45 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 15:04:24 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain	*_brain;
	public:
		//Default constructor
		Dog();

		//Copy constructor
		Dog(const Dog &other);

		//Destructor
		~Dog();

		//Assignement operator overload
		Dog	&operator=(const Dog &other);

		//Make sound message
		void	makeSound(void) const;
};

#endif