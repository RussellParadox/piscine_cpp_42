/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:16:35 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/06 11:53:13 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int	Fixed::_bpoint = 8;

Fixed::Fixed(): _value(0)
{
}

Fixed::Fixed(const Fixed &other): _value(other._value)
{
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		_value = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed::Fixed(const int n): _value(n << _bpoint)
{
}

Fixed::Fixed(const float f): _value(static_cast<int>(roundf(f * (1 << _bpoint))))
{
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _bpoint));
}

int	Fixed::toInt(void) const
{
	return (_value >> _bpoint);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (_value > other.getRawBits());
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (_value < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (_value >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (_value <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (_value == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (_value != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++()
{
	++_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);

	++_value;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	--_value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);

	--_value;
	return (tmp);
}

Fixed	Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed	Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed	Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

Fixed	Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}