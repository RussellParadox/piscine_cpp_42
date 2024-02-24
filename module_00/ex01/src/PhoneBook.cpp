/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:28:43 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/24 15:03:25 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "ft.hpp"

PhoneBook::PhoneBook() : size(0), oldest(0)
{
}

PhoneBook::PhoneBook(const PhoneBook &other) : size(other.size), oldest(other.oldest)
{
	for (int i = 0; i < 8; i++)
		contacts[i] = other.contacts[i];
}

PhoneBook	&PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{
		size = other.size;
		oldest = other.oldest;
		for (int i = 0; i < 8; i++)
			contacts[i] = other.contacts[i];
	}
	return (*this);
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add()
{
	Contact	contact;

	contact.get();
	if (size == 8)
	{
		contacts[oldest] = contact;
		oldest++;
		if (oldest == 8)
			oldest = 0;
	}
	else
	{
		contacts[size] = contact;
		size++;
	}
}

void	PhoneBook::search()
{
	std::stringstream	ss;
	std::string			input;
	int			        index;

	if (size == 0)
	{
		std::cout << "\nNo contact. Try to add one with 'ADD'.\n" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < size; i++)
		contacts[i].columns(i + 1);
	std::cout << std::endl;
	ft::getline(input, "Index: ");
	ss.str(input);
	if (!(ss >> index))
		std::cerr << "\nInvalid input: Need to be an integer.\n" << std::endl;
	else if (index < 1 || index > size)
		std::cerr << "\nIndex out of range.\n" << std::endl;
	else
		contacts[index - 1].info();
}