/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:16:03 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/06 11:48:18 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_bpoint;
	public:
		//Default constructor
		Fixed();

		//Copy constructor
		Fixed(const Fixed &other);

		//Assignement operator overload
		Fixed	&operator=(const Fixed &other);

		//Destructor
		~Fixed();

		//Get value without conversion to fixed number
		int getRawBits(void) const;

		//Set value
		void setRawBits(int const raw);

		//Parametized constructor: int
		Fixed(const int n);

		//Parametized constructor: float
		Fixed(const float f);

		//Convert fixed to float
		float	toFloat(void) const;

		//Convert fixed to int
		int	toInt(void) const;

		//Print function for ostream
		std::ostream	&print(std::ostream &os) const;

		//Strict superiority operator overload
		bool	operator>(const Fixed &other) const;

		//Strict inferiority operator overload
		bool	operator<(const Fixed &other) const;

		//Superiority operator overload
		bool	operator>=(const Fixed &other) const;

		//Inferiority operator overload
		bool	operator<=(const Fixed &other) const;

		//Equality operator overload
		bool	operator==(const Fixed &other) const;

		//Inequality operator overload
		bool	operator!=(const Fixed &other) const;

		//Addition operator overload
		Fixed	operator+(const Fixed &other) const;

		//Substraction operator overload
		Fixed	operator-(const Fixed &other) const;

		//Multiplication operator overload
		Fixed	operator*(const Fixed &other) const;

		//Division operator overload
		Fixed	operator/(const Fixed &other) const;

		//Prefix increment operator overload
		Fixed	&operator++();

		//Postfix increment operator overload
		Fixed	operator++(int);

		//Prefix decrement operator overload
		Fixed	&operator--();

		//Postfix decrement operator overload
		Fixed	operator--(int);

		//Minimum
		static Fixed	min(Fixed &n1, Fixed &n2);

		//Minimum with constants
		static Fixed	min(const Fixed &n1, const Fixed &n2);

		//Maximum
		static Fixed	max(Fixed &n1, Fixed &n2);

		//Maximum with constants
		static Fixed	max(const Fixed &n1, const Fixed &n2);
};

//Insertion operator overload
std::ostream	&operator<<(std::ostream &os, const Fixed &obj);

#endif