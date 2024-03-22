/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:22:23 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/21 10:30:25 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
	public:
		//Constructor(s)/Destructor
		~ScalarConverter();

		//Operator(s) overload
		ScalarConverter	&operator=(const ScalarConverter &other);

		//Static method(s)
		static void	convert(std::string literal);
};

#endif