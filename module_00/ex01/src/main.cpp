/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:52:39 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/24 14:53:58 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "ft.hpp"

int	main(void)
{
	PhoneBook	phone_book;
	std::string	    input;

	ft::getline(input);
	while (input.compare("EXIT"))
	{
		if (!input.compare("ADD"))
			phone_book.add();
		if (!input.compare("SEARCH"))
			phone_book.search();
		ft::getline(input);
	}
	return (0);
}