/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:16:03 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/04 14:21:09 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					value;
		static const int	binary_point;
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
};

#endif