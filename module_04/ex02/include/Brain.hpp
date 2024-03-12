/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:18:58 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 14:47:39 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		//Default constructor
		Brain();

		//Copy constructor
		Brain(const Brain &other);

		//Assignement operator overload
		Brain	&operator=(const Brain &other);

		//Destructor
		~Brain();
};

#endif