/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:06:20 by gdornic           #+#    #+#             */
/*   Updated: 2024/02/24 15:01:12 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "ft.hpp"

Contact::Contact() : first_name("0"), last_name("0"), nickname("0"), phone_number("0"), darkest_secret("0")
{
}

Contact::Contact(const Contact &other) : first_name(other.first_name), last_name(other.last_name), nickname(other.nickname), phone_number(other.phone_number), darkest_secret(other.darkest_secret)
{
}

Contact	&Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		first_name = other.first_name;
		last_name = other.last_name;
		nickname = other.nickname;
		phone_number = other.phone_number;
		darkest_secret = other.darkest_secret;
	}
	return (*this);
}

Contact::~Contact()
{
}

void	Contact::get()
{
	std::cout << std::endl;
	ft::getline(first_name, "\tFirst name: ");
	ft::getline(last_name, "\tLast name: ");
	ft::getline(nickname, "\tNickname: ");
	ft::getline(phone_number, "\tPhone number: ");
	ft::getline(darkest_secret, "\tDarkest secret: ");
	std::cout << std::endl;
}

void	Contact::columns(int index)
{
	std::string	dot_format;

	std::cout << std::setw(10) << index << "|";
	dot_format = (first_name.size() > 10) ? (first_name.substr(0, 9) + ".") : first_name;
	std::cout << std::setw(10) << dot_format << "|";
	dot_format = (last_name.size() > 10) ? (last_name.substr(0, 9) + ".") : last_name;
	std::cout << std::setw(10) << dot_format << "|";
	dot_format = (nickname.size() > 10) ? (nickname.substr(0, 9) + ".") : nickname;
	std::cout << std::setw(10) << dot_format << std::endl;
}

void	Contact::info()
{
	std::cout << "\nContact informations:\n" << std::endl;
	std::cout << "\tFirst name: " << first_name << std::endl;
	std::cout << "\tLast name: " << last_name << std::endl;
	std::cout << "\tNickname: " << nickname << std::endl;
	std::cout << "\tPhone number: " << phone_number << std::endl;
	std::cout << "\tDarkest secret: " << darkest_secret + "\n" << std::endl;
}