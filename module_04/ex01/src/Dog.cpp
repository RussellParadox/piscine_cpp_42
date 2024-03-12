/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:59:23 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 15:06:58 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal()
{
	std::cout << "Dog default constructor call" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Dog copy constructor call" << std::endl;
	if (other._brain != NULL)
		_brain = new Brain(*other._brain);
	else
		_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor call" << std::endl;
	if (_brain != NULL)
		delete _brain;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		if (_brain != NULL)
			delete _brain;

		if (other._brain != NULL)
			_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waf." << std::endl;
}