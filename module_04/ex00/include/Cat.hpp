/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:01:23 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 11:01:43 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		//Default constructor
		Cat();

		//Copy constructor
		Cat(const Cat &other);

		//Destructor
		~Cat();

		//Make sound message
		void	makeSound(void) const;
};

#endif