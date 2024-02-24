/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:18:58 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/24 14:28:13 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		//Default constructor
		Contact();

		//Copy constructor
		Contact(const Contact &other);

		//Assignement operator
		Contact	&operator=(const Contact &other);

		//Destructor
		~Contact();

		void	get();

        void	columns(int index);

		void	info();
};

#endif