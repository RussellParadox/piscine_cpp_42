/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:05:38 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/02 14:09:14 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>

class Harl
{
	private:
		//Print debug message
		void	debug(void);

		//Print info message
		void	info(void);

		//Print warning message
		void	warning(void);

		//Print error message
		void	error(void);
	public:
		//Default constructor
		Harl();

		//Copy constructor
		Harl(const Harl &other);

		//Assignement operator
		Harl	&operator=(const Harl &other);

		//Destructor
		~Harl();

		//Access to private print functions
		void	complain(std::string level);
};

#endif