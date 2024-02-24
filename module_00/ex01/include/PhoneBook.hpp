/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:59:09 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/22 10:05:58 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		size;
		int		oldest;
	public:
		//Default constructor
		PhoneBook();

		//Copy constructor
		PhoneBook(const PhoneBook &other);

		//Assignement operator
		PhoneBook	&operator=(const PhoneBook &other);

		//Destructor
		~PhoneBook();

		//Add contact
		void	add();

		//Search contact
		void	search();
};

#endif