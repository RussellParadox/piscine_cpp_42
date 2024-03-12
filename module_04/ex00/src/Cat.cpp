/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:59:47 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 11:14:52 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
	_type = "Cat";
	std::cout << "Cat default constructor call" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat copy constructor call" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor call" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou." << std::endl;
}