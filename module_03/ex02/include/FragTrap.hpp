/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:55:13 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/11 10:13:58 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <string>

class FragTrap: public ClapTrap
{
	private:
	public:
		//Default constructor override
		FragTrap();

		//Copy constructor override
		FragTrap(const FragTrap &other);

		//Destructor override
		~FragTrap();

		//Parametized constructor override: std::string
		FragTrap(std::string name);

		//High five message
		void	highFivesGuys(void);
};

#endif