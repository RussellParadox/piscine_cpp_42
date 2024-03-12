/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:59:23 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 11:14:29 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal()
{
	_type = "Dog";
	std::cout << "Dog default constructor call" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Dog copy constructor call" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor call" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Waf." << std::endl;
}