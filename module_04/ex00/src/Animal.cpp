/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:58:49 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/30 14:52:34 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(): _type("No type")
{
	std::cout << "Animal default constructor call" << std::endl;
}

Animal::Animal(const Animal &other): _type(other._type)
{
	std::cout << "Animal copy constructor call" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor call" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Some animal sound." << std::endl;
}