/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:02:49 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 10:57:20 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		//Default constructor
		WrongCat();

		//Copy constructor
		WrongCat(const WrongCat &other);

		//Destructor
		~WrongCat();

		//Make sound message
		void	makeSound(void) const;
};

#endif