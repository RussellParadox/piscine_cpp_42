/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:07:46 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/28 11:35:15 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		//Default constructor
		Zombie();

		//Copy constructor
		Zombie(const Zombie &other);

		//Assignement operator
		Zombie	&operator=(const Zombie &other);

		//Destructor
		~Zombie();

		//Parametized constructor
		Zombie(std::string name);

		//Annouce a zombie
		void	announce(void);

		//Set zombie name
		void	set(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif