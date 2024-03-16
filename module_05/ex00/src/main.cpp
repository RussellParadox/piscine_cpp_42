/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:29:09 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/15 17:17:21 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	b1("Marco", 150);
	Bureaucrat	b2("Valentin", 1);
	Bureaucrat	b3("Aymeric", 0);

	b1.gradeDecrement();
	b2.gradeIncrement();
	b3.gradeIncrement();

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
}