/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:59:47 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 15:09:36 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
	std::cout << "Cat default constructor call" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat copy constructor call" << std::endl;
	if (other._brain != NULL)
		_brain = new Brain(*other._brain);
	else
		_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor call" << std::endl;
	if (_brain != NULL)
		delete _brain;
}

Cat	&Cat::operator=(const Cat &other)
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

void	Cat::makeSound(void) const
{
	std::cout << "Miaou." << std::endl;
}