/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:02:17 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 10:57:11 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		//Default constructor
		WrongAnimal();

		//Copy constructor
		WrongAnimal(const WrongAnimal &other);

		//Assignement operator overload
		WrongAnimal	&operator=(const WrongAnimal &other);

		//Destructor
		~WrongAnimal();

		//Get type
		std::string	getType(void) const;

		//Make sound message
		void	makeSound(void) const;
};

#endif