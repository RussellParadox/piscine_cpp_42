/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:00:28 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/12 11:15:53 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor call" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor call" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor call" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong miaou." << std::endl;
}