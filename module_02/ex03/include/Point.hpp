/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:02:06 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/07 11:38:06 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
	public:
		//Default constructor
		Point();

		//Copy constructor
		Point(const Point &other);

		//Assignement operator overload
		Point	&operator=(const Point &other);

		//Destructor
		~Point();

		//Parametized constructor: const float, const float
		Point(const float x, const float y);

		//Get _x
		Fixed	getX(void) const;

		//Get _y
		Fixed	getY(void) const;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif