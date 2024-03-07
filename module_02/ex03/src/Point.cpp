/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:01:32 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/07 11:39:00 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point(const Point &other): _x(other.getX()), _y(other.getY())
{
}

Point	&Point::operator=(const Point &other)
{
	if (this != &other)
	{
	}
	return (*this);
}

Point::~Point()
{
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
}

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const
{
	return (_y);
}