/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:16:35 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/04 14:19:06 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other): value(other.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		value = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}