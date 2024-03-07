/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:01:48 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/07 11:52:57 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//the line that split the plane in 2 semi-plane is determined by l1 and l2
//return true if the point p belong to the side(semi-plane) where s belongs
bool	belongSide(const Point l1, const Point l2, const Point s, const Point p)
{
	Fixed	al;
	Fixed	as;
	Fixed	bl;
	Fixed	bs;

	al = (l1.getY() - l2.getY()) / (l1.getX() - l2.getX());
	as = (s.getY() - p.getY()) / (s.getX() - p.getX());
	bl = l1.getY() - al * l1.getX();
	bs = s.getY() - as * s.getX();

	Point	intersection(((bl - bs) / (as - al)).toFloat(), (as * (bl - bs) / (as - al) + bs).toFloat());

	if (Fixed::min(s.getX(), p.getX()) <= intersection.getX() && Fixed::max(s.getX(), p.getX()) >= intersection.getX() \
	&& Fixed::min(s.getY(), p.getY()) <= intersection.getY() && Fixed::max(s.getY(), p.getY()) >= intersection.getY())
		return (false);
	return (true);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	if (belongSide(b, c, a, point) && belongSide(a, c, b, point) && belongSide(a, b, c, point))
		return (true);
	return (false);
}