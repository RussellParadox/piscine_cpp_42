/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:16:03 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/06 09:05:43 by gdornic          ###   ########.fr       */
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

		//Assignement operator
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
};

//Insertion operator overload
std::ostream	&operator<<(std::ostream &os, const Fixed &obj);

#endif