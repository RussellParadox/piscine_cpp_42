/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdornic <gdornic@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:29:09 by gdornic           #+#    #+#             */
/*   Updated: 2024/03/17 16:19:00 by gdornic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	b1("Marco", 69);
	Bureaucrat	b2("Marco en mieux", 1);
	AForm	*f1 = new ShrubberyCreationForm("Horse");
	AForm	*f2 = new RobotomyRequestForm("Hugo");
	AForm	*f3 = new PresidentialPardonForm("Lou");

	std::cout << b1 << std::endl;

	b1.executeForm(*f1);
	b1.signForm(*f1);
	b1.executeForm(*f1);

	b1.signForm(*f2);
	b1.signForm(*f3);
	b2.signForm(*f3);

	b1.executeForm(*f2);
	b2.executeForm(*f2);
	b2.executeForm(*f3);

	delete	f1;
	delete	f2;
	delete	f3;
}