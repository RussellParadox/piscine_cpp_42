/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:29:09 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/16 18:24:28 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	b1("Marco", 69);
	Form		f1("Permis velo", 151, 0);
	Form		f2("Code de la route", 1, 1);

	std::cout << b1 << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

	b1.signForm(f1);
	b1.signForm(f2);

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
}