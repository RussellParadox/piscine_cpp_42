/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:01:23 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 15:04:29 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain	*_brain;
	public:
		//Default constructor
		Cat();

		//Copy constructor
		Cat(const Cat &other);

		//Destructor
		~Cat();

		//Assignement operator overload
		Cat	&operator=(const Cat &other);

		//Make sound message
		void	makeSound(void) const;
};

#endif